
#include <bits/stdc++.h>
#define MAXN 1200
using namespace std;

struct node
{
    string bdate;
    string bgroup;
};
map<string, node> mp;

bool cmp(node a, node b)
{
    return a.bdate < b.bdate;
}

int n;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        string s, email, bdate, bgroup;
        cin >> s >> email >> bdate >> bgroup;
        mp[email] = {bdate, bgroup};
    }
    map<string, int> blood_count;
    blood_count["A+"] = 0;
    blood_count["A-"] = 0;
    blood_count["B+"] = 0;
    blood_count["B-"] = 0;
    blood_count["AB+"] = 0;
    blood_count["AB-"] = 0;
    blood_count["O+"] = 0;
    blood_count["O-"] = 0;
    map<string, int> birthy_cnt;
    for (auto x : mp)
    {
        blood_count[x.second.bgroup]++;
        birthy_cnt[x.second.bdate.substr(6, 4)]++;
    }
    vector<pair<string, int>> bg_vec, by_vec;
    for (auto x : blood_count)
        bg_vec.push_back({x.first, x.second});
    sort(bg_vec.begin(), bg_vec.end());
    for (auto x : birthy_cnt)
        by_vec.push_back({x.first, x.second});
    sort(by_vec.begin(), by_vec.end());
    for (auto x : bg_vec)
        cout << x.first << " " << x.second << endl;
    for (auto x : by_vec)
        cout << x.first << " " << x.second << endl;
    return 0;
}
