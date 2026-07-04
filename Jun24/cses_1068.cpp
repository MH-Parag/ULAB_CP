// https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
 
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n = n/2ll;
        }
        else{
            n = (n*3ll)+1;
        }
    }
    cout<<1<<"\n";
 
	return 0;
}
