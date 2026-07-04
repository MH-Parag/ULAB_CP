// https://cses.fi/problemset/task/1083


// approach 1
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main() {
    
    // input
    int n; cin>>n;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
 
    int mark[n+1];
    for(int i=0; i<n+1; i++){
        mark[i] = 0;
    }
 
    for(int i=0; i<n-1; i++){
        int x = arr[i];
        mark[x] = 1;
    }
 
    int ans;
    for(int i=1; i<=n; i++){
        if(mark[i]==0) ans=i;
    }
    cout<<ans<<"\n";
 
	return 0;
}






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
