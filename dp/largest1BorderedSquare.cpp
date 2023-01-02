#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int ones(vector<vector<int>>& grid,int i,int j,int &maxi, vector<vector<int> > &dp){
    if(i>=grid.size() || j>=grid[0].size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int right=ones(grid,i,j+1,maxi,dp);
    int diag=ones(grid,i+1,j+1,maxi,dp);
    int down=ones(grid,i+1,j,maxi,dp);
    
    int sz=0;
    if(grid[i][j]==1){
        dp[i][j]=min(right,min(down,diag))+1;
        maxi=(max(maxi,dp[i][j]));
    }
    if(grid[i][j]==0){
        if(min(right,min(down,diag))>=1){
           dp[i][j]=min(right,min(down,diag))+2;
              maxi=(max(maxi,dp[i][j]));
        }
        else{
            return dp[i][j]= 0;
        }
    }
    return dp[i][j];
}
int main()
{
    fastio;
    vector<vector<int>> grid={{1,1,0,0}};
    int maxi=0;
   



   
   
    vector<vector<int> > dp(grid.size(),vector<int> (grid[0].size(),-1));
    int n=ones(grid,0,0,maxi,dp);
    
    return 0;
}