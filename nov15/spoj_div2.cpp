// https://vjudge.net/problem/SPOJ-DIV2

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);cout << fixed << setprecision(6);
#define done cout<<"Successful\n";
#define stop getchar();
#define input(data,n) for(int xd=0;xd<n;xd++)cin>>data[xd];
#define output(data,n) for(auto x: data){cout<<x<<sp;}
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

const int nmax = 1e6;
int mark[nmax+5];

/// complexity O(n log log n)
void seiveFactorize(){
    mark[0] = mark[1] = 0;
    for(int i=2; i<=nmax; i++){
        if(!mark[i]>0){
            for(int m = 2*i; m<=nmax; m+=i){
                mark[m] = i;
            }
        }
    }
}

/// complexity O(log n)
map<int,int> factorize(int n){
    map<int,int>factors;
    if(n==1) return factors;

    while(mark[n] != 0){
        factors[mark[n]]++;
        n /= mark[n];
    }

    factors[n]++;

    return factors;
}

bool check(int n){
    ll taw=1;
    bool flag = true;
    map<int,int>m = factorize(n);
    for(pair<int,int>p:m){
        taw *= (p.second+1);
        if(p.second>1) flag = false;
    }
    return ((taw>3)&&flag);
}



int main(){
//    fast;
    seiveFactorize();
    vector<int>special;
    special.push_back(-1);
    for(int n=1; n<=nmax; n++){
        if(check(n)) special.push_back(n);
    }
    for(int i=108; i<special.size(); i+=108){
        cout<<special[i]<<nl;
    }
    return 0;
}
  
