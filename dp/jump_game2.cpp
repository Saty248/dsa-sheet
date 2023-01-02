#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int jump2(vector<int> &nums,int i,vector<int> &dp){
     if(i==size(nums)-1){
          return 0;
     }
    
    if(i>size(nums)-1){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int mini=1e9;
   
    int k=1;
    do{
         mini=min(mini,jump2(nums,i+k,dp)+1);
         k++;
    }
    while(k<=nums[i] && i+k<size(nums));
    dp[i]=mini;
    return dp[i];

}

int main()
{
    fastio;
    vector<int> nums={2,3,1,1,4};
    vector<int> dp(nums.size()+1,-1);
    cout<<jump2(nums,0,dp);
    return 0;
}