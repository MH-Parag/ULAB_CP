// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    // fast io
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
    // take input -> n
    int n; cin>>n;
    int two=0, five=0;
 
    // counting 2 in n!
    int two_pow = 2;
    while(two_pow <= n){
        two += (n / two_pow);
        two_pow *= 2;
    }
 
    // counting 5 in n!
    int five_pow = 5;
    while(five_pow <= n){
        five += (n / five_pow);
        five_pow *= 5;
    }
 
    // number of 10 in n! = min(#2, #5)
    cout<<min(two, five)<<"\n";
 
    return 0;
}
