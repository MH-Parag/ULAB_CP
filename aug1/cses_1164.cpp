//https://cses.fi/problemset/task/1164
#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

struct customer{
    int a, b, id;
    bool operator < (const customer &other) const {
        return a < other.a;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n, room=1; cin>>n;
    vector<customer> v(n);
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        cin>>v[i].a>>v[i].b;
        v[i].id = i;
    }
    sort(v.begin(), v.end());
    priority_queue< pii, vector<pii>, greater<pii> > pq;
    for(int i=0; i<n; i++){
        auto assign_new_room = [&] (){
            ans[v[i].id]=room;
            pq.push(make_pair(v[i].b, room++));
        };
        if(pq.empty()){
            assign_new_room();
        }
        else{
            auto[d, x] = pq.top();
            if(v[i].a > d){
                ans[v[i].id]=x;
                pq.pop();
                pq.push(make_pair(v[i].b, x));
            }
            else{
                assign_new_room();
            }
        }
    }
    cout<<room-1<<"\n";
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
