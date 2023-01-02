#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
  int rob1(vector<int>& nums,int n,vector<int>& dp) {
    if(n==0){
        return nums[n];
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int inc=rob1(nums,n-2,dp)+nums[n];
    int exc=rob1(nums,n-1,dp);
    dp[n]= max(inc,exc);
    return dp[n];
    
        
    }
    int rob2(vector<int>& nums,int n,vector<int>& dp) {
    if(n==1){
        return nums[n];
    }
    if(n<1){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int inc=rob2(nums,n-2,dp)+nums[n];
    int exc=rob2(nums,n-1,dp);
    dp[n]= max(inc,exc);
    return dp[n];
    
        
    }
int main()
{
    fastio;
    vector<int> nums={1,2,3,1};
    int n=size(nums);
    vector<int> dp1(n+1,-1);    
     vector<int> dp2(n+1,-1);
    cout<<max(rob1(nums,n-2,dp1),rob2(nums,n-1,dp2));

 dp1[0]=nums[0];
    for(int i=1;i<n;i++){
       
        int inc=dp1[i-2]+nums[i];
        int exc=dp1[i-1]+nums[i];
        dp1[i]=max(inc,exc);
    }
    return 0;
}