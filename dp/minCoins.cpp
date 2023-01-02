#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int minCoin(vector<int> &num,int x,vector<int> &dp){
if(x==0){
    return 0;
}
if(x<0){
    return INT_MAX;
}
if(dp[x]!=-1){
    return dp[x];
}
int mini=INT_MAX;
for(auto val:num){
    int ans=minCoin(num,x-val,dp);
    
    if(ans!=INT_MAX){
        mini=min(mini,ans+1);
        dp[x]=mini;
    }
    
}
return dp[x] ;
}


int main()
{
    fastio;
    int amt=3;
    vector<int> dp(amt+1,-1);
    vector<int> num={5,2,1};
    int x=minCoin(num,amt,dp);
    cout<<x<<endl;
    return 0;
}