#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

/// complexity O(sqrt(n) log(n))
map<ll, ll> primeFactorize(ll n){
    map<ll, ll>factors;
    if(n==1){
        return factors;
    }
    for(ll i=2; i*i<=n; i++){
        while(n%i==0){
            n /= i;
            factors[i]++;
        }
    }
    if(n!=1){
        factors[n]++;
    }
    return factors;
}

int main(){
    ll n; cin>>n;
    map<ll, ll>v = primeFactorize(n);
    for(auto[p, a] : v){
        cout<<p<<"^"<<a<<endl;
    }
    return 0;
}
