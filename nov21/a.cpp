

#include<bits/stdc++.h>
using namespace std;

const int oo = 1e9;
const int Mod = 2;

int safeMod(int x){
    int ret = x%Mod;
    if(ret<0) ret+=Mod;
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans = oo;
    for(int x : v){
        if(safeMod(x)==0){
            ans = min(ans, abs(x)/2);
        }
    }
    if(ans==oo) cout<<"-1\n";
    else cout<<ans<<"\n";
}
