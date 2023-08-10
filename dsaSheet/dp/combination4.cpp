#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
    int solve(vector<int>& nums, int target,vector<int>& dp) {
        if(target==0){
            return 1;
        }
        if(target<0){
            return 0;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+solve(nums,target-nums[i],dp);
        }
        dp[target]=ans;
        return  dp[target];
    }
    int solveTab(vector<int>& nums, int target){
        vector<int> dp(target+1,0);
        dp[0]=1;

        for(int j=1;j<=target;j++){
            int ans=0;
        for(int i=0;i<nums.size();i++){
            if(target-nums[i]>=0)
            dp[i]=dp[i]+dp[target-nums[i]];
        }
        }
        return dp[target];

    }
      
int main()
{
    fastio;
    vector<int> nums={1,2,3};
    int target=4;
    vector<int> dp(target+1,-1);
    cout<<solve(nums,target,dp);
    return 0;
}