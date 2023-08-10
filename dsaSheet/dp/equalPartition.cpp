#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
    int solve(vector<int>& nums,int target,int i){
          if(i>=nums.size() ){
            return 0;
        }
        if(target==0){
            return 1;
        }

      
        if(target<0){
            return 0;
        }      
         int take,notTake;
        take=solve(nums,target-nums[i],i+1);
        notTake=solve(nums,target,i+1);
        int sum= (take + notTake);
    return sum;
    }
int main()
{
    fastio;
    vector<int> nums={1,5,11,5};
    int target=22;
    return solve(nums,target/2,0);
    // code goes here
    return 0;
}