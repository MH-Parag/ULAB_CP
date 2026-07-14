//https://codeforces.com/contest/469/problem/A
#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define nl "\n"
#define sp " "

int main() {
    int n; cin>>n;
    
    int p; cin>>p;
    vector<int> x(p);
    for(int i=0; i<p; i++) cin>>x[i];

    int q; cin>>q;
    vector<int> y(q);
    for(int i=0; i<q; i++) cin>>y[i];

    set<int> st;
    st.insert(all(x));
    st.insert(all(y));
    // for(int i : x) st.insert(i);
    // for(int i: y) st.insert(i);

    if(sz(st)==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

    return 0;
}
