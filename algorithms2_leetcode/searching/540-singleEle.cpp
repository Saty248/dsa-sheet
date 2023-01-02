#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void single(vector<int> nums,int s,int e,bool &k,int &ans){
    if(k==true){
        return;
    }
    if(s>e){
        
        return;
    }

    if(nums[s]<nums[s+1]){
        ans=nums[s];
        k=true;
        return;
    }
    
    if(nums[e]>nums[e-1]){
        ans=nums[e];
        k=true;
        return;
    }
    int mid=s+(e-s)/2;
    if(nums[mid]<nums[mid+1] && nums[mid]>nums[mid-1]){
        ans=nums[mid];
        k=true;
        return;
    }

    if(nums[mid]==nums[mid+1]){
        single(nums,s,mid-1,k,ans);
        single(nums,mid+2,e,k,ans);
        return;
    }
    if(nums[mid]==nums[mid-1]){
        single(nums,s,mid-2,k,ans);
        single(nums,mid+1,e,k,ans);
        return;
    }


}
int main()
{
    fastio;
    vector<int> nums={1,1,2,3,3,4,4,8,8};
    bool k=false;
    int ans;
    single(nums,0,nums.size()-1,k,ans);
    cout<<ans<<" ";
    return 0;
}