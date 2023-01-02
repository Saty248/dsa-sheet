#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

/* int losq(vector<int> &nums,int i,int prev,vector<vector<int> > &dp){
if(i==size(nums)){
    return 0;
}
if(dp[i][prev+1]!=-1){
    return dp[i][prev+1];
}
int inc=0 ;
if(prev==-1 || nums[i]>nums[prev]){
    inc=1+losq(nums,i+1,i,dp);
 }
int exc=losq(nums,i+1,prev,dp);
dp[i][prev+1]= max(inc,exc);
return dp[i][prev+1];

} */

int main(){
    fastio;
    vector<int> nums={10,9,2,5,3,7,101,18};
    int n=size(nums);
    vector<vector<int> > dp(n+1,vector<int> (n+1,-1));
   /*    cout<<losq(nums,0,-1,dp);

    dp[n][n+1]=0;
    for(int i=n-1;i>=0;i--){
        for(int prev=i-1;prev>=-1;prev--){
            int inc=0 ;
if(prev==-1 || nums[i]>nums[prev]){
    inc=1+dp[i+1][i];
 }
int exc=dp[i+1][prev+1];
dp[i][prev+1]= max(inc,exc);
        }
    }


    return dp[0][0]; */

vector<int> arr(1);
    arr[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]>arr[i-1]){
            arr.push_back(nums[i]);

        }else{
            int ind=lower_bound(arr.begin(),arr.end(),arr[i])-arr.begin();
            arr[ind]=nums[i];
        }
    }


}