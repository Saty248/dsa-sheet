#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int N=1e3+10;
vector<int> gp1[N];
int vis[N];
int level[N];


void bfs(int i){
queue<int> q;
vis[i]=1;
q.push(i);
while(!q.empty()){
    int cv=q.front();
    q.pop();
    cout<<cv<<" ";
   for(int child:gp1[cv]){
    if(vis[child]!=1){
        q.push(child);
        vis[child]=1;
    }

    }
}
}

void bfs1(vector<int> gp[], vector<int> &vis1,int i){
queue <int> q;
q.push(i);

vis1[i]=1;


while(!q.empty()){
    int cv=q.front();
    cout<<cv<<" ";
    q.pop();
    for(int child:gp[cv]){
        if(vis1[child]!=1){
    q.push(child);
    vis1[child]=1;
}


}


}


}
int main()
{
    fastio;
    int n ,m;
    cin>>n>>m;
    vector<int> gp[n];
    vector<int> vis1(n,0);
    int level1[n];
    for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;

    gp1[a].push_back(b);
    gp1[b].push_back(a);



}
bfs(1);
        
   
    return 0;
}