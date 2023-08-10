#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
long long int solve(int coins[], int N, int sum,int i,vector<vector<int>> &dp) {
    if(i==N || sum<0){

        return 0;
    }
   if(sum==0){
    dp[sum][i]=1;
    return 1;
   }
   
   if (dp[sum][i]!=0) return dp[sum][i];
    long long int  inc=solve(coins,N,sum-coins[i],i,dp);
    long long int exc=solve(coins,N,sum,++i,dp);
    
   dp[sum][i]=inc+exc;
   cout<<sum<<"->"<<i<<"="<<dp[sum][i]<<endl;
    return dp[sum][i];
    }


   
int main()
{
    fastio;
    vector<vector<int>> dp(5,vector<int> (4,0));
    int coins[]= {1,2,3};
    cout<<solve(coins,3,4,0,dp);
    //cout<<solveMen(coins,4,10,0,dp);
    
    return 0;
}