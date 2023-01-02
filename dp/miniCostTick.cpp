#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int minicost(vector<int>& days, vector<int>& costs,int dur,int cost,int i,int n,vector<int> dp){
    if(i==n){
        return cost;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
     int mini=INT_MAX;
    if(dur-days[i]<=0){
       
        
            mini=min(mini,minicost(days,costs,days[i]+1,cost+costs[0],i+1,n,dp));
             mini=min(mini,minicost(days,costs,days[i]+7,cost+costs[1],i+1,n,dp));
              mini=min(mini,minicost(days,costs,days[i]+30,cost+costs[2],i+1,n,dp));
           
        
    }
    else{
         mini=min(mini,minicost(days,costs,dur,cost,i+1,n,dp));
        
    }
     dp[i]= mini;
     return dp[i];
}
int main()
{
    fastio;
     
    vector<int> days={1,4,6,7,8,20};
     vector<int> costs={2,7,15};
     vector<int> dp(size(days)+1,-1);
     cout<<minicost(days,costs,0,0,0,size(days),dp);
    return 0;
}