#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<int> dfs2(int source,vector<vector<int>>& graph,vector<bool> &vis){
    vector<int> path;
vector<int> ans;
vis[source]=true;
if(graph[source].size()==0){
    path.push_back(source);
    return path;
}
for(auto child:graph[source]){
    if(vis[child]==false){
        ans=dfs2(child,graph,vis);
    path.push_back(child);
    path.insert(path.end(),ans.begin(),ans.end());
    }
    

}
return path;

}
vector<vector<int>> dfs(int source,vector<vector<int>>& graph,vector<bool> &vis){
vector<int> path;
vector<vector<int>> ans;
vis[source]=true;

for(auto child:graph[source]){
    if(vis[child]==false){
        
       path= dfs2(child,graph,vis);
    path.insert(path.begin(),0);
    ans.push_back(path);
    path.clear();
    }
}

return ans;
}

int main()
{
    fastio;
  vector<vector<int>> graph=  {{1,2},
                                {3},
                                {3},
                                 {}};
    vector<bool> vis(graph.size(),false);
  vector<vector<int>> ans= dfs(0,graph,vis);
  for(auto val:ans){
    for(auto v:val){
        cout<<v<<" ";
    }
    cout<<endl;
  }

    return 0;
}