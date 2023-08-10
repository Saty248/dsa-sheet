#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


int solve(vector<int> nums,int i){
    if(i==nums.size()){
        return 0;
    }

    int take, notTake;
    int prev=(i-1 < 0 ? 1 : nums[i-1]);
    int succ=(i+1 >= nums.size() ? 1 : nums[i+1]);
    notTake=0+solve(nums,i+1); 
    take=(prev*succ*nums[i]);
    vector<int> n1;
    for(int j=0;j<nums.size();j++){
        if(i==j) continue;
        n1.push_back(nums[j]);
    }
    take=take+solve(n1,0);

    return max(take,notTake);
}
 


int main()
{
    fastio;
   vector<int>nums={1,5};
   cout<<solve(nums,0);
   
    return 0;
}