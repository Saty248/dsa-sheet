 #include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;

vector<int> g[N];
int vis[N];
int level[N];
void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=1;

    while(!q.empty()){
        int cv=q.front();
        q.pop();
        cout<<cv<<"  ";
        for(int child:g[cv]){
            if(vis[child]!=1){
                q.push(child);
                vis[child]=1;
                level[child]=level[cv]+1;
            }
        }
    }
}

int main(){

int n ,m;
cin>>n>>m;

for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;
g[a].push_back(b);
g[b].push_back(a);

}
bfs(0);
cout<<endl;
for(int i=0;i<n;i++){
    cout<<i<<" : "<<level[i]<<endl;

}


    return 0;
}