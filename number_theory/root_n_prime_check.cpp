#include <bits/stdc++.h>
using namespace std;
typedef long long int li;

/// complexity O(sqrt(n))
bool isPrime(li n){
    if(n==1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    li n = 998244353;
    if(isPrime(n)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;

    return 0;
}
