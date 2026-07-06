// approach 2
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main() {
    ll n;
    cin>>n;
    ll arr[n-1];
    for(ll i=0; i<n-1; i++){
        cin>>arr[i];
    }
    ll expected_sum = (n*(n+1))/2;
    ll current_sum = 0;
    for(ll i=0; i<n-1; i++){
        current_sum += arr[i];
    }
    cout<<expected_sum - current_sum <<"\n";
	return 0;
}
