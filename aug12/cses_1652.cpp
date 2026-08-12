// https://cses.fi/problemset/task/1652

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q; cin>>n>>q;
    char forest[n+1][n+1];
    int a[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>forest[i][j];
            a[i][j] = (forest[i][j]=='*') ? 1 : 0;
        }
    }

    // build 2D Prefix-sum
    int pre[n+1][n+1];
    memset(pre, 0, sizeof(pre));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] + a[i][j] - pre[i-1][j-1];
        }
    }

    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int sum = pre[x2][y2] - pre[x2][y1-1] - pre[x1-1][y2] + pre[x1-1][y1-1];
        cout<<sum<<"\n";
    }
}
