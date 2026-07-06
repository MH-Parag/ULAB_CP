// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    // fast io
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
    // take input -> n
    ll n; cin>>n;
 
    // making the factorial array
    ll fact[n+1];
    fact[1] = 1;
    for(ll i=2; i<=n; i++){
        fact[i] = fact[i-1]*i;
    }
    ll x = fact[n];
 
    ll cnt = 0;
    // count number of trailling zeros in x
    while(true){
        ll a = x%10;
        if(a==0){ // found zero
            cnt++;
            x = x/10;
        }
        else{ // found non-zero
            break;
        }
    }
    cout<<cnt<<"\n";
 
    return 0;
}
