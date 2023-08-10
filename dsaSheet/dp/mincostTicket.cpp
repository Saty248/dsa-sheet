#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(vector<int>& days,vector<int>& cost,int idx,int free,vector<vector<int>> &dp){
    if(idx==days.size()){
        return 0;
    }
   // cout<<idx<<endl;
    if(days[idx]<=free){
        return solve(days,cost,idx+1,free,dp);
    }
    if(dp[idx][free]!=-1){
        return dp[idx][free];
    }
int ans=INT_MAX;
    for(int i=0;i<cost.size();i++){
        vector<int> f={1,7,30};
        ans=min(ans,solve(days,cost,idx+1,days[idx]+f[i]-1,dp)+cost[i]);
    }
    //cout<<"day= "<<days[idx]<<"cost = "<<ans<<endl;
    dp[idx][free]=ans;
    return dp[idx][free];


}



int main()
{
    fastio;

   
    vector<int> days={1,2,3,4,5,6,7,8,9,10,30,31};
    vector<int> cost={2,7,15};
     vector<vector<int>> dp(days.size()+1,vector<int> (days[days.size()-1]+30,-1));
    cout<<solve(days,cost,0,0,dp);
    return 0;
}