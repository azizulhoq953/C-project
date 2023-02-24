
// // // #include <bits/stdc++.h>
// // // #define ll long long
// // // #define mod 998244353
// // // using namespace std;

// // // ll qpow(ll x, ll y) {
// // // ll res = 1;
// // // while (y) {
// // // if (y & 1)
// // // res = res * x % mod;
// // // x = x * x % mod;
// // // y >>= 1;
// // // }
// // // return res;
// // // }

// // // int T;
// // // int n, k, m;

// // // int main() {
// // // cin >> T;
// // // while (T--) {
// // // cin >> n >> k >> m;
// // // cout << qpow((k - 1) * qpow(k, mod - 2) % mod, m - 1) * (n - m) % mod << endl;
// // // }
// // // return 0;
// // // }

// // #include <bits/stdc++.h>

// // using namespace std;

// // const int mod = 998244353;

// // int pow_mod(int x, int y) {
// //     int res = 1;
// //     while (y > 0) {
// //         if (y & 1) {
// //             res = (long long) res * x % mod;
// //         }
// //         x = (long long) x * x % mod;
// //         y >>= 1;
// //     }
// //     return res;
// // }

// // int inverse(int x) {
// //     return pow_mod(x, mod - 2);
// // }

// // int main() {
// //     int p = 7, q = 3;
// //     int res = (long long) p * inverse(q) % mod;
// //     cout << res << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++) {
//         int a, b, c, k;
//         cin >> a >> b >> c >> k;
//         if ((a + k - b >= 0) && (b + k - c >= 0) && (a + k - c >= 0) && ((a + k - b) % k == 0) && ((b + k - c) % k == 0) && ((a + k - c) % k == 0)) {
//             cout << "Case " << i << ": Peaceful" << endl;
//         } else {
//             cout << "Case " << i << ": Fight" << endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#define MAXN 1205
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
    map<string, int> bg_cnt;
    bg_cnt["A+"] = 0;
    bg_cnt["A-"] = 0;
    bg_cnt["B+"] = 0;
    bg_cnt["B-"] = 0;
    bg_cnt["AB+"] = 0;
    bg_cnt["AB-"] = 0;
    bg_cnt["O+"] = 0;
    bg_cnt["O-"] = 0;
    map<string, int> by_cnt;
    for (auto x : mp)
    {
        bg_cnt[x.second.bgroup]++;
        by_cnt[x.second.bdate.substr(6, 4)]++;
    }
    vector<pair<string, int>> bg_vec, by_vec;
    for (auto x : bg_cnt)
        bg_vec.push_back({x.first, x.second});
    sort(bg_vec.begin(), bg_vec.end());
    for (auto x : by_cnt)
        by_vec.push_back({x.first, x.second});
    sort(by_vec.begin(), by_vec.end());
    for (auto x : bg_vec)
        cout << x.first << " " << x.second << endl;
    for (auto x : by_vec)
        cout << x.first << " " << x.second << endl;
    return 0;
}
