#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{

   protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};



class LRUCache : public Cache {
    private:
        void jumptofirst(Node* ptr) {
            ptr->next->prev = ptr->prev;
            ptr->prev->next = ptr->next;
            ptr->prev = head;
            ptr->next = head->next;
            ptr->prev->next = ptr;
            ptr->next->prev = ptr;
        }
    public:
        LRUCache(int c) {
            cp = c;
            head = new Node(-1, -1);
            tail = new Node(head, nullptr, -1, -1);
            head->next = tail;
        }
        void set(int k, int v) {
            if (mp.find(k) != mp.end()) {
                mp[k]->value = v;
                jumptofirst(mp[k]);
            } else {
                Node* ptr = new Node(head, head->next, k, v);
                mp[k] = ptr;
                head->next = ptr;
                ptr->next->prev = ptr;
                if (mp.size() > cp) {
                    tail->prev->prev->next = tail;
                    auto tobedelete = tail->prev;
                    tail->prev = tail->prev->prev;
                    tobedelete->prev = nullptr;
                    tobedelete->next = nullptr;
                    mp.erase(tobedelete->key);
                    delete tobedelete;
                }
            }

        }
        int get(int k) {
            if (mp.find(k) != mp.end()) {
                jumptofirst(mp[k]);
                return mp[k]->value;
            } else {
                return -1;
            }

        }
};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
