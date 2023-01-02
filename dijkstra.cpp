 #include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int inf=1e8+10;
vector<pair<int,int>> g[N];
int vis[N];
vector<int> dis(N,inf);



void dijkstra(int source){
    set<pair<int,int>> st;
    st.insert({0,source});
    dis[source]=0;
    while(st.size()>0){
        auto node=*st.begin();
        int v=node.second;
        int dis_v=node.first;
        st.erase(st.begin());
        if(vis[v]==1) continue;
        vis[v]=1;

        for(auto child:g[v]){
            int child_v=child.first;
            int wt=child.second;
            if(wt+dis[v]<dis[child_v]){
                dis[child_v]=wt+dis[v];
                st.insert({dis[child_v],child_v});
            }

        }
    }


}




int main(){




int n ,m;
cin>>n>>m;

for(int i=0;i<m;i++){
int a,b,c;
cin>>a>>b>>c;
g[a].push_back({b,c});


}
dijkstra(1);

for(int i=1;i<=n;i++){
    cout<<dis[i]<<endl;

}

cout<<endl;
    return 0;
}