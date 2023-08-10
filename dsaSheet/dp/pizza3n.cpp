#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int solve(int s,int e,vector<int> &slices,int k,vector<vector<int>> &dp){
if(k==0 || s>e){
    return 0;
}
int take,notTake;
if(dp[s][k]!=-1){
    return dp[s][k];
}
take=slices[s]+solve(s+2,e,slices,k-1,dp);
notTake=0+solve(s+1,e,slices,k,dp);
dp[s][k]=max(take,notTake);
return dp[s][k];
}

int main()
{
    fastio;
        vector<int> slices={1,2,3,4,5,6};
        int n=slices.size();
        vector<vector<int>> dp1(n,vector<int>(n,-1));
        int c1=solve(0,n-2,slices,n/3,dp1);
        vector<vector<int>> dp2(n,vector<int>(n,-1));
        int c2=solve(1,n-1,slices,n/3,dp2);
        cout<<max(c1,c2);
    
    return 0;
}