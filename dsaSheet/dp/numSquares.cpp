#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int solve(int n ,vector<int>&dp){
if(n==0){
    return 0;
}
if(dp[n]!=0){
    return dp[n];
}
int sq=1;
int ans=INT_MAX;
while((sq*sq)<=n){
ans=min(ans,solve(n-(sq*sq),dp));
sq++;
}
ans++;
dp[n]=ans;
return dp[n];

}

int solveTab(int n){
     vector<int> dp(n+1,0);
     for(int i=1;i<dp.size();i++){
        int sq=1;
int ans=INT_MAX;
while((sq*sq)<=n){
    if(n-(sq*sq)>=0){
    ans=min(ans,dp[n-(sq*sq)]);
sq++;
    }else{
        break;
    }
}
ans++;
dp[i]=ans;
     }
     return dp[n];
}

int main()
{
    fastio;
    int n=13;
    vector<int> dp(n+1,0);
    cout<<solveTab(n);
    
    return 0;
}