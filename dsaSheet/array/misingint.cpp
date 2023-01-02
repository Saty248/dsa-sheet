#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
     vector<int> nums={1,3,4};
      for(int i=0;i<nums.size();i++){
        while(nums[i]>0 && nums[i]<nums.size() && nums[i]!=nums[nums[i-1]]){
            swap(nums[i],nums[nums[i]-1]);
        }
      }
       int n=nums.size();
        for(int i = 0; i < n; ++ i)
            if(nums[i] != i + 1)
                return i + 1;
        
        return n + 1;
  
    return 0;
}