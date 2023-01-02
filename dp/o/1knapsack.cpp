#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int knapsack1(vector<int> &w1,vector<int> &v1,int n,int cap, vector<vector<int>> &dp){
    if(n==0){
        if(cap>=w1[n]){
            return v1[n];
        }else{
            return 0;
        }}
    if(cap<0){
        return INT_MIN;
    }
    if(dp[n][cap]!=-1){
        return dp[n][cap];
    }
        int inc=knapsack1(w1,v1,n-1,cap-w1[n],dp)+v1[n];
        int exc=knapsack1(w1,v1,n-1,cap,dp);
        dp[n][cap]=max(inc,exc);
    return dp[n][cap];
}

int main()
{
    fastio;
     int n=4;
    int cap=5 ;
    vector<int> w1={1,2,4,5};
    vector<int> v1={5,4,8,6};
   vector<vector<int>> dp(n, vector<int>(cap+1,-1));
    cout<<knapsack1(w1,v1,n-1,cap,dp);
    return 0;
}