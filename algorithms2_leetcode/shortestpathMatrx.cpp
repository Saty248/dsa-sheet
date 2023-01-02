#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

 void shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    vector<pair<int,int>> movements={{-1,-1 },{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
    int level[grid.size()][grid.size()];
    bool vis[grid.size()][grid.size()];
   if(grid[0][0]==1 || grid[grid.size()-1][grid.size()-1]!=0){
    cout<<-1<<endl;
   }

   else{ 
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            level[i][j]=-1;
            vis[i][j]=0;    
        }
    }

    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0]=true;
    level[0][0]=1;
    while(!q.empty()){
        pair<int,int> cp=q.front();
        q.pop();
        for(auto move:movements){
            int xc=cp.first+move.first;
            int yc=cp.second+move.second;
            if(xc>-1 && xc<grid.size() && yc>-1 && yc<grid.size() && grid[xc][yc]==0 && vis[xc][yc]==0){
                q.push({xc,yc});
                vis[xc][yc]=1;
                level[xc][yc]=level[cp.first][cp.second]+1;
            }


        }

    }


    cout<<level[grid.size()-1][grid.size()-1]<<endl;

   }

    }

int main()
{
    fastio;
    
    vector<vector<int>> grid={{1,0,0},{1,1,0},{1,1,0}};
    shortestPathBinaryMatrix(grid);
    return 0;
}