// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n,q; cin>>n>>q;
    vector<ll> arr(n+1), pre(n+1, 1ll), pre_zero(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            pre_zero[i] = pre_zero[i-1] + 1;
            arr[i] = 1;
        }
        else{
            pre_zero[i] = pre_zero[i-1];
        }
        pre[i] = pre[i-1]*arr[i];
    }

    auto count_zero = [&] (int x, int y){
        return pre_zero[y] - pre_zero[x-1];
    };

    auto range_multi = [&] (int l, int r){
        if(count_zero(l, r) > 0ll){
            return 0ll;
        }
        return pre[r] / pre[l-1];
    };

    while(q--){
        int a,b; cin>>a>>b;
        cout<< range_multi(a,b) <<"\n";
    }
}
