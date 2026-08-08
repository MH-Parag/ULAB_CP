// https://cses.fi/problemset/task/1643/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll oo = 1e18;

int main(){
    int n; cin>>n;
    vector<ll> arr(n+1), pre(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    // building prefix sum array
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + arr[i];
    }

    set<ll> st = {0};
    ll ans = -oo;
    for(int r=1; r<=n; r++){
        ll x = *st.begin();
        ans = max(ans, pre[r]-x);
        st.insert(pre[r]);
    }
    cout<<ans<<"\n";
    return 0;
}
