#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
const int oo = 1e9+10;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n,t; cin>>n>>t;
    vector<pii> v(n+1);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }

    v[n] = {t, oo};
    sort(v.begin(), v.end());

    int max_last = 0;
    int ans = 0;

    for(auto[st, ed] : v){
        ans = max(ans, st-max_last);
        max_last = max(max_last, ed);
    }

    cout<<ans<<"\n";
    return 0;
}
