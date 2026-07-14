// https://codeforces.com/problemset/problem/903/C
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);cout << fixed << setprecision(6);
#define done cout<<"Successful\n";
#define stop getchar();
#define input(data,n) for(int xd=0;xd<n;xd++)cin>>data[xd];
#define output(data,n) for(int xd=0;xd<n;xd++)cout<<data[xd]<<" ";
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define li long long int
#define nl "\n"
#define sp " "

int main(){
    fast;
    int n;
    cin>>n;
    int data[n];
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>data[i];
        mp[data[i]]++;
    }
    int output=0;
    for(pair<int,int>p: mp){
        if(p.second>output){
            output=p.second;
        }
    }
    cout<<output;
    return 0;
}
 
