#include<bits/stdc++.h>
using namespace std;
int depth[14];
int height[14];
int subtree[14]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};

void indepth(int n,vector<int> g[],vector<bool> &vis,int par){
    vis[n]=true;
    for(int i=0;i<g[n].size();i++){
        if(vis[g[n][i]]==false){
            depth[g[n][i]]=depth[n]+1;
            indepth(g[n][i],g,vis,n);
            height[n]=max(height[n],height[g[n][i]]+1);
            subtree[n]=subtree[n]+subtree[g[n][i]];
        }
    }
}

void unc(vector<int> g[],int n){
    vector<bool> vis(n,false);

    for(int i=0;i<n;i++){
        if(vis[i]==false){
            indepth(i,g,vis,i);
        }

    }
    

}

int main(){
 int n,m;
    cin>>n>>m;
    
    vector<int> g[n];

    for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;
g[a].push_back(b);
g[b].push_back(a);
    }
    unc(g,n);

for(int i=0;i<n;i++){
        cout<<depth[i]<<" "<<height[i]<<"  "<<subtree[i]<<endl;
        
    }

    return 0;
}
/* 13 12
0 1
0 2
0 12
1 4
2 3
4 5
4 6
4 7
7 11
3 8
3 9
9 10 */