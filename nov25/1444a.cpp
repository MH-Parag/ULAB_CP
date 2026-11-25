// https://codeforces.com/problemset/problem/1444/A

#include "bits/stdc++.h"
using namespace std;

#ifndef DeBuG
    #define dbg(...)	
#endif

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define nl "\n"
#define sp " "
#define sz(x) (int)(x).size()
using ll = long long; using vi = vector<int>;
using pii = pair<int,int>; using pll = pair<ll,ll>;

template<class T> using V = vector<T>;

/// complexity O(sqrt(n) log(n))
vector<ll> primeFactorize(ll n){
    vector<ll>factors;
    if(n==1){
        return factors;
    }
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            factors.push_back(i);
            while(n%i==0){
                n /= i;
            }
        }
    }
    if(n!=1){
        factors.push_back(n);
    }
    return factors;
}

void solve(){
    ll p,q; cin>>p>>q;
    if(p%q!=0){
        cout<<p<<nl;
        return;
    }
    ll x = p;
    V<ll> prime_factors = primeFactorize(q);
    ll ans = 1;
    for(ll pr : prime_factors){
        ll tempX = x;
        while(tempX % q == 0){
            tempX/=pr;
        }
        ans = max(ans, tempX);
    }
    cout<<ans<<nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin>>t; 
    while(t--) solve();
}
