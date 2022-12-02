
#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
#include<string.h>

using namespace std;
/*
//____________________________________________________________________________________________________________________________________
#define PI  2*acos(0.0)
#define pf  printf
#define sc  scanf
#define ff  first
#define ss  second
#define pb  push_back
typedef long long ll;
typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define sc1(n)         sc("%d",&n)
#define sc2(n, m)      sc("%d%d", &n, &m)
#define sc3(m, n, o)   sc("%d%d%d", &m, &n, &o)
#define scl(n)         sc("%lld", &n)
#define scll(n, m)     sc("%lld%lld", &n, &m)
#define sclll(n, m, o) sc("%lld%lld%lld", &n, &m, &o)
#define scf(f)         sc("%lf",&f);
#define pn(n)          pf("%d\n", n);
#define FOR(i,a,n)   for( int i = a; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;
const int MOD =  1e9 + 7;
const long double EPS = 1e-9;
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline double my_sqrt(T n) { double high = n + 5, low = 0, mid, ans; int cnt = 100; while(cnt--) { mid = low + (high - low) / 2; if(mid * mid <= n) ans = mid, low = mid; else high = mid; } return ans; }
template <class T> inline T bigmod(T b, T p){ if(p <= 0 || b == 0) return 1; ll x = b; if(p & 1) return (x * bigmod(b, p - 1)) % MOD; x = bigmod(b, p >> 1); return (x * x) % MOD;}
template <class T> inline string to_string(const pair<T,T> &p) {
return "{" + to_string(p.first) + "," + to_string(p.second) + "}";
}

#ifdef SHADHIN
#define dbg(x) cout << _LINE_ << " says: " << #x << " = " << x << "\n"
#else
#define dbg(x)
#endif
*/
//____________________________________________________________________________________________________________________________________
const int N=1e6+10;
int hsh[N];
void solve()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;++t)
    {
        for(int i=0;i<N;++i)
            hsh[i]=0;

        int n;
        cin>>n;

        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            if(x<0)
            {
                x=-x;
                hsh[x]=2;
            }
            else
                hsh[x]=1;
        }

        int sum=0;
        for(int i=0;i<N;++i)
        {
            if(hsh[i]==1)
                sum+=i;
            else if(hsh[i]==2)
                sum-=i;
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }
}
int main()
{
    #ifdef SHADHIN
        freopen("/Users/shadhin/Desktop/Code/input.txt","r",stdin);
        freopen("/Users/shadhin/Desktop/Code/output.txt","w",stdout);
        int start_time = clock();
    #endif
    //FastIO;

    int test = 1;

    // sc1(test);

    while(test--)
    {
        solve();
    }

    #ifdef SHADHIN
        int end_time = clock();
        printf("\nTime = %.4f",(end_time-start_time+0.0)/CLOCKS_PER_SEC);
    #endif

    return 0;
}
