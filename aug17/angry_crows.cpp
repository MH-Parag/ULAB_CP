https://drafts.toph.co/p/653143775cfbee5719452194/statement

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k; cin>>n>>m>>k;
    int pre[n+2][m+2];
    memset(pre, 0, sizeof(pre));

    while(k--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        pre[a][b]++;
        pre[a][y+1]--;
        pre[x+1][b]--;
        pre[x+1][y+1]++;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            pre[i][j] += pre[i-1][j];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            pre[i][j] += pre[i][j-1];
        }
    }

    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            ans = max(ans, pre[i][j]);       
        }
    }

    cout<<ans<<"\n";
}
