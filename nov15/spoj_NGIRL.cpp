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

const int nmax = 1e6;
bool mark[nmax+5];
vector<ll> special;

void seive(){
    mark[0] = mark[1] = true;
    for(int i=2; i<=nmax; i++){
        if(mark[i]) continue;
        for(int j=i+i; j<=nmax; j+=i){
            mark[j] = true;
        }
    }
    for(int i=2; i<=nmax; i++){
        if(!mark[i]) special.push_back(1ll*i*i);
    }
}

ll leq(ll a){
    auto it = upper_bound(all(special), a);
    return it - special.begin();
}

void solve(){
    ll n,k; cin>>n>>k;
    ll x = leq(n);
    ll y = leq(k);
    if(k>=n) cout<<x<<sp<<0<<nl;
    else cout<<x<<sp<<x-y<<nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    seive();
    int t; cin>>t; 
    while(t--) solve();
}
