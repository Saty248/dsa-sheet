#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int floor1(vector<int> nums,int s,int e,int target){
    if(s>e){
        return nums[e];
    }
    int m=s+(e-s)/2;
     if(target==nums[m]){
           return nums[m];
        }
        if(target<nums[m]){
            return floor1(nums,s,m-1,target);
        }
        else{
            return floor1(nums,m+1,e,target);
        }
}

int main()
{
    fastio;
    vector<int> nums={1,3,5};
    cout<<floor1(nums,0,nums.size()-1,0);
    return 0;
}