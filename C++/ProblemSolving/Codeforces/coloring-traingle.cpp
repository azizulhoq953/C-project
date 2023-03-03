#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector <bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0;i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(), v.end())  //sort
#define mxe(v) *max_element(v.begin(), v.end())   //find max element in vector
#define mne(v) *min_element(v.begin(), v.end())      // find minimum element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
//make sure to sort before applying unique // else only consecutive duplicates would be remove

using namespace std;


int MOD=998244353;              //hardcoded Directly change from here for function
 

 //==========================================MATH UTIL BEGINS===============================================
 //======================================= compute power with mod ==========================================

 uint power( int x, int y, int p = MOD)
 {
 unsigned long long res = 1;
 x = x % p;
 while (y > 0)
 {
    if(y & 1)
        res = (res * x) % p;
    y = y >> 1;
    x = (x * x) % p;
 }
 return res;
 }


 // ========================================================================================
 uint modInverse(int n, int p=MOD)   //using format little thm. [p needs to be prime which is  mostly the case as mod value generally is le9+7]
 {
    return power(n, p - 2, p);
 }

 //can also derive this using extended euclidean .. however this simpler code..

 // ============================used to calculate nCr of Higher Values =======================

 uint nCr (int n, int  r, int p=MOD)   //faster calculate
 {
    if (n<r)
        return 0;
    vector<int> fac(n+1,0);
    fac[0] =1;
    for(int i=1; i<=n; i++)
        fac[i] = (fac[i - 1] * i) % p;
    return (fac[n] * modInverse(fac[r], p) % p* modInverse(fac[n - r], p) % p) % p;

 }
 // ========================================MATH UTIL ENDS===========================


 //==========================================take ip/op like vector, pairs directly!===================
 template<typename typC, typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) {return cin>>a.first>>a.second;}
 template<typename typC> istream &operator>>(istream &cin, vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
 template<typename typC,typename typD> ostream &operator<<(ostream &cout, const pair<typC,typD> &a) {return cout<<a.first<< ' '<<a.second; }
 template<typename typC, typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) {for(auto &x:a) cout<<'\n'; return cout; }
 template<typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a)  { int n=a.size(); if(!n) return cout; cout<<a[0]; for(int i=1; i<n; i++) cout<<' '<<a[i]; return cout<<' ';}
 // =========================================END of the input module ====================================


 void solve(){
    int n=1,m=0;
    string s;
    cin>>n;
    vvi grps;
    int mx=0;
    int res=1;
    for (int i = 0; i < n/3; i++)
    {
        vi v(3);
        cin>>v;
        sort(all(v));
        if(v[0]==v[1] && v[1]==v[2]){
            res*=3;
        }
        else if((v[0]==v[1])){
            res*=2;
        }
        res%=MOD;
    }
    res*=nCr(n/3,n/6);
    res%=MOD;
    cout<<res<<"\n";
  
    
 }

 int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    while(T--){
        solve();
    }
    return 0;

 }
 