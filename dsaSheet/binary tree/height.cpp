#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void height(vector<int> gp1[],int n, vector<int> &vis, int ht[],int par){
   
    /* for(int i=0;i<n;i++){
        for(auto val:gp1[i]){
            cout<<val<<" ";
        }
    } */

    vis[par]=1;

    for(int i=0;i<gp1[par].size();i++){
        if(vis[gp1[par][i]]!=1){
            ht[gp1[par][i]]=ht[par]+1;
            height(gp1,n,vis,ht,gp1[par][i]);
            
        }
    }

  

}


int main()
{
    fastio;
    int n ,m;
    cin>>n>>m;
    vector<int> gp1[n];
    vector<int> vis(n,0);
    int ht[n];
    ht[0]=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        gp1[a].push_back(b);
        gp1[b].push_back(a);
    }
    height(gp1,n,vis,ht,0);
    for(int i=0;i<n;i++){
        cout<<ht[i]<<" ";
    }
    
    return 0;
}