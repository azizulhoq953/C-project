#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        string s;               cin>>s;
 
        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }
 
        int dp[30][30];
 
        for(int i=0;i<30;i++){
            for(int j=0;j<30;j++){
                dp[i][j]=0;
            }
        }
 
        for(int i=0;i<n-1;i++){
            dp[s[i]-'a'][s[i+1]-'a']++;
        }
 
        bool ok=false;
        for(int i=0;i<=26;i++){
            for(int j=0;j<=26;j++){
                if(i==j)continue;
                if(dp[i][j]>1){
                    ok=true;
                    break;
                }
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            ok=false;
            for(char c='a';c<='z';c++){
                int cons=0;
                vector<int> v;
                for(int i=0;i<n;i++){
                    if(s[i]==c){
                        cons++;
                        if(i==n-1 or s[i+1]!=c){
                            v.push_back(cons);
                            cons=0;
                        }
                    }
                }
                if(v.empty()){
                    continue;
                }
                else{
                    if(v.size()==1){
                        if(v[0]>3){
                            ok=true;
                            break;
                        }
                    }
                    else{
                        int mx=0;
                        for(int i=0;i<v.size();i++){
                            if(v[i]>3 or mx>1 and v[i]>1){
                                ok=true;
                                break;
                            }
                            mx=max(mx,v[i]);
                        }
                        if(ok)break;
                    }
                }
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}