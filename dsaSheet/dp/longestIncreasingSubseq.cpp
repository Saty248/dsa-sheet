#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(vector<int> &nums,int i,int diff){
    if(i==nums.size()) return 0;

    int ans=0;
    for(int j=i-1;j>=0;j--){
        if(nums[i]-nums[j]==diff)
        ans=max(ans,1+solve(nums,j,diff));
        }

    return ans;

}

int main()
{
    fastio;
    vector<int> nums={20,1,15,3,10,5,8};


    int ans=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            ans=max(ans,2+solve(nums,i,nums[j]-nums[i]));
        }
    }
    cout<<ans;
    return 0;
}