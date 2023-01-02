#include<bits/stdc++.h>
using namespace std;


void indepth(int n,vector<int> g[],vector<bool> &vis){
    
    vis[n]=true;
    
    for(int i=0;i<g[n].size();i++){
        if(vis[g[n][i]]==false){
            indepth(g[n][i],g,vis);
        }
        

    }


}
void unc(vector<int> g[],int n){
    int c=0;
    vector<bool> vis(n,false);

        for(int i=0;i<n;i++){
            if(vis[i]==false){
                c++;
                indepth(i,g,vis);
            }
        }
        cout<<c<<endl;

    

}

int main(){
    int n,m;
    cin>>n>>m;
    int depth[n];
    vector<int> g[n];

    for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;
g[a].push_back(b);
g[b].push_back(a);
    }
    unc(g,n);

    return 0;
}