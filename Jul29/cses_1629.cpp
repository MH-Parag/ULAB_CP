// https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define pii pair<int,int>

bool cmp(pii a, pii b){
    return a.second < b.second;
}

int main() {
    int n; cin>>n;
	vector< pii > v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(all(v), cmp);
    
    int last = -1;
    int ans = 0;
    for(auto[a, b] : v){
        if(a >= last){
            ans++;
            last = b;
        }
    }

    cout<<ans<<"\n";
}
