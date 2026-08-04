// https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n,q; cin>>n>>q;
    vector<ll> arr(n+1), pre(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+arr[i];
    }

    auto range_sum = [&] (int l, int r){
        return pre[r] - pre[l-1];
    };

    while(q--){
        int a,b; cin>>a>>b;
        cout<< range_sum(a,b) <<"\n";
    }
}
