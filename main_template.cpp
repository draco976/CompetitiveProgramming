#pragma GCC optimize("-Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
// #include <atcoder/all>
// #include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T> using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

#define endl "\n"
#define f1(i,n) for (int i=0;i<n;i++)
#define f2(i,n) for (int i=1;i<=n;i++)
#define int long long
#define ss second
#define ff first
#define pc(x) __builtin_popcountll(x)
#define lz(x) __builtin_clzll(x)
#define tz(x) __builtin_ctzll(x)
#define pb(x) push_back(x)
 
typedef vector<int> vi ;
typedef queue<int> qi ;
typedef vector<vector<int>> vvi ;
//typedef vector<vector<ll>> vvll ;
typedef vector<vector<pair<int,int>>> vvp ;
typedef vector<bool> vb ;
typedef vector<double> vd ;
typedef vector<vector<char>> vvc ;
typedef vector<char> vc ;
typedef pair<int,int> pii ;
typedef vector<pair<int,int>> vpi ;
//typedef vector<pair<ll,ll>> vpll ;
//typedef pair<ll,ll> pll ;
//typedef vector<ll> vll ;
typedef stack<int> si ;
typedef map<int,int> mii ;
typedef set<int> seti ;
typedef multiset<int> mseti ;
typedef double db ;
 
// **********************
 
int min(int x,int y) {
    if(x<y) return x;
    else return y;
}
 
int max(int x,int y) {
    if(x>y) return x;
    else return y;
}
 
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
 
int power(int x,int y, int md){
    int res = 1;
    x%=md;
    while(y){
        if(y&1)res = (res*x)%md;
        x *= x;
        if(x>=md) x %= md;
        y >>= 1;
    }
    return res;
}

vi primes ;

void sieve_eras(int n1=100000) {
    vector<bool> is_prime(n1+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n1; i++) {
        if (is_prime[i] && (long long)i * i <= n1) {
            for (int j = i * i; j <= n1; j += i)
                is_prime[j] = false;
        }
    }
    f2(i,n1) {
        if(is_prime[i]) primes.push_back(i) ;
    }
}

seti prime_fact(int n) {
    int j=0 ;
    seti res ;
    while(primes[j]*primes[j]<=n) {
        while(n%primes[j]==0) {
            n/=primes[j] ;
            res.insert(primes[j]) ;
        }
        j++ ;
    }
    if(n!=1) res.insert(n) ;
    return res ;
}

int const LIM = 200000+90 ;
int MOD = 1000000007 ;
vi fact ;
 
void calc_fact() {
    fact.assign(LIM,0) ;
    fact[0]=1 ;
    f2(i,LIM-1) {
        fact[i] = i*fact[i-1] ;
        fact[i]%=MOD ;
    }
}
 
// ********************************************

const int lim =1000000+200 ;
int mod1 = 998244353 ;
int mod2 = 1000000007 ;
int INF = 1000000000000000000+100000000000 ;
int M = 1000000000000000000+100000000000 ;
const int MAXN=4000000+200 ;

// ********************************************

void solve() {

}

signed main() {
    ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
    int t=1 ;
//    cin >> t ;
    
    int cnt=1 ;
    while(t--) {
//        cout << "Case " << cnt << ": " ;
        solve() ;
        cnt++ ;
    }
}
