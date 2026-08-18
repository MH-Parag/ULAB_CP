// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    vector<ll> arr(n+1, 0), pre(n+1, 0);
    for(ll i=0; i<n; i++){
        arr[i+1] = (s[i] - '0');
    }
    for(ll i=1; i<=n; i++){
        pre[i] = pre[i-1] + arr[i];
    }

    map<ll,ll> mp;
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        ll lhs = pre[i]-i;
        ll rhs = pre[i-1]-i+1;
        mp[rhs]++;
        ans+=mp[lhs];
    }
    cout<<ans<<"\n";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
