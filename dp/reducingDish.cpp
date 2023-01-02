#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int mxst(vector<int> &st,int i,int t,vector<vector<int> >&dp){
if(i==size(st)){
    return 0;
}
if(dp[i][t]!=-1){
    return dp[i][t];
}
int inc=st[i]*t + mxst(st,i+1,t+1,dp);
int exc=mxst(st,i+1,t,dp);
int maxi=max(inc,exc);
dp[i][t]=maxi;
return dp[i][t];

}

int main()
{
    fastio;
    vector<int> satisfaction={-1,-8,0,5,-9};
    sort(satisfaction.begin(),satisfaction.end());
    vector<vector<int> > dp(size(satisfaction)+1,vector<int>(size(satisfaction)+1,-1));
    cout<<mxst(satisfaction,0,1,dp);

int n=size(satisfaction);
dp[n][n]=0;

for(int i=n-1;i>=0;i--){
    for(int j=i;i>=0;j--){
        int inc=satisfaction[i]*(j+1) + dp[i+1][j+1];
        int exc=dp[i+1][j];
        int maxi=max(inc,exc);
        dp[i][j]=maxi;
    }
}

    return 0;
}