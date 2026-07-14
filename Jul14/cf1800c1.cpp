// https://codeforces.com/problemset/problem/1800/c1

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int) x.size()
using ll = long long;

void solve(){
    // taking input
    int n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    priority_queue<ll> pq;
    ll ans = 0;
    for(ll x : v){
        if(x==0){
            if(pq.empty()) continue;
            ans += pq.top();
            pq.pop();
        }
        else{
            pq.push(x);
        }
    }
    cout<<ans<<"\n";
}

int main() {
    int t; cin>>t;
    while(t--) solve();
	return 0;
}
