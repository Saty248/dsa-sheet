 #include<bits/stdc++.h>
using namespace std;
/*
const int n1=1e5+10;
bool vis[n1];
vector <int> g1[n1];
void dfs(int vertex){
    vis[vertex]=true;
    cout<<vertex<<endl;
    for(int child:g1[vertex]){
        cout<<"parent="<<vertex<<"child="<<child<<endl;
            if(vis[child]==true){
                continue;
            }
            dfs(child);
    }
}



int main(){

int n ,m;
cin >>n >>m;

for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;
g1[a].push_back(b);
g1[b].push_back(a);

}

dfs(0);

    return 0;
} */

// A simple representation of graph using STL,
// for the purpose of competitive programming
void indepth(vector<int> g[],int n, vector<bool> &vis)
{
    vis[n]=true;
    cout<<n << " ";
    for(int i=0;i<g[n].size();i++){
        if(vis[g[n][i]]==false){
            indepth(g,g[n][i],vis);
        }
    }
}
void unc(vector<int> g[],int v){

    vector<bool> visited(v, false);
    for(int i=0; i < v;i++){
        
        if(visited[i]==false){
            indepth(g,i,visited);

        }


    }

}



int main(){

int n ,m;
cin >>n >>m;
vector <int> g1[n];
for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;
g1[a].push_back(b);
g1[b].push_back(a);

}

unc(g1,n);

    return 0;
}


