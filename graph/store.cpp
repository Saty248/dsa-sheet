#include<bits/stdc++.h>
using namespace std;


int g1[3][3];
bool vis[3];
vector <int> g2[3];

void dfs(int vertex){

for(int child:g2[vertex]){
    if(child)
    continue;
    dfs(child);
}


}

int main(){

for(int i=0;i<6;i++){
 int a,b;
 cin>>a>>b;
 g1[a][b]=1;
 g1[b][a]=1;

g2[a].push_back(b);
g2[b].push_back(a);
}

    return 0;
}