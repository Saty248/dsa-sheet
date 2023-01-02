#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int minSum(vector<int> &values,int i,int j, vector<vector<int> > &dp){
    if(i+1==j){
        return 0;

    } 
     if(dp[i][j]!=-1){
        return dp[i][j];
    } 
int ans=INT_MAX;
    for(int a=i+1;a<j;a++){
        ans=min(ans,values[a]*values[i]*values[j]+ minSum(values,i,a,dp)+minSum(values,a,j,dp));
}
 dp[i][j]=ans;
return dp[i][j]; 

}
int main()
{
    fastio;
    vector<int> values={1,2,3};

      vector<vector<int> > dp(values.size(),vector<int> (values.size(),-1));
      cout<<minSum(values,0,values.size()-1,dp);
    return 0;
}