#include <bits/stdc++.h>
#define mod 1000000007
#define MAXN 500000
using namespace std;

int T, n, ans, tot;
char s[MAXN + 5];
int cnt[26], pre[26][MAXN + 5];

inline int qpow(int x, int y) {
    int res = 1;
    while (y) {
        if (y & 1) res = (long long) res * x % mod;
        y >>= 1; x = (long long) x * x % mod;
    }
    return res;
}

inline int C(int n, int m) {
    int res = 1;
    for (int i = 1; i <= m; i++)
        res = (long long) res * (n - m + i) % mod * qpow(i, mod - 2) % mod;
    return res;
}

inline int add(int x, int y) { return (x + y >= mod) ? (x + y - mod) : (x + y); }

inline int get(int l, int r, int d) {
    int ret = 0;
    for (int i = 0; i < 26; i++)
        ret = add(ret, pre[i][r] - (l ? pre[i][l - 1] : 0));
    return ret == d;
}

inline int check(int l, int r) {
    int len = r - l + 1;
    if (len & 1) return get(l + len / 2 + 1, r, (len - 1) / 2) && get(l, l + len / 2 - 1, len / 2);
    return get(l + len / 2, r, len / 2) && get(l, l + len / 2 - 1, len / 2);
}

int main() {
    scanf("%d", &T);
    for (int cases = 1; cases <= T; cases++) {
        scanf("%s", s); n = strlen(s);
        memset(cnt, 0, sizeof cnt);
        memset(pre, 0, sizeof pre);
        ans = tot = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') cnt[s[i] - 'a']++, tot++;
            else if (s[i] >= 'A' && s[i] <= 'Z') cnt[s[i] - 'A']++, tot++;
        }
        for (int i = 0; i < 26; i++) pre[i][0] = cnt[i] & 1;
        for (int i = 1; i < n; i++)
            for (int j = 0; j < 26; j++)
                pre[j][i] = add(pre[j][i - 1], (cnt[j] & (1 << (i % (n >> 1)))) ? 1 : 0);
        for (int i = 0; i < (n >> 1); i++) {
            if (!check(i, n - 1 - i)) break;}
        }}