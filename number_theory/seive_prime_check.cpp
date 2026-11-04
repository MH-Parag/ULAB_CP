#include <bits/stdc++.h>
using namespace std;
typedef long long int li;

const int nmax = 1e7;
bool mark[nmax+5];

/// complexity O(n log log n)
void seive(){ // mark[i] = false -> this a prime number
    mark[0] = mark[1] = true;
    for(int i=2; i<=nmax; i++){
        if(!mark[i]){ // if i is prime -> if mark[i] == false
            for(int m = 2*i; m<=nmax; m+=i){
                mark[m] = true; // m is not prime, because m is a multiple of i
            }
        }
    }
}

bool isPrime(int n){
    return !mark[n];
}

void solve(){
    int n; cin>>n;
    if(isPrime(n)) cout<<n<<" is a prime number\n";
    else cout<<n<<" is a composite number\n";
}

int main(){
    seive(); // pre calculate
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
/// number of prime upto n = n/log n
