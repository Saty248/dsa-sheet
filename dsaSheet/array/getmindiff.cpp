#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

/* int solve(vector<int> nums,int i,int k){
        int n=nums.size();
        if(i==n+1){
            return 1e8;
        }
        vector<int> temp=nums;
        temp[i]+=k;
        int add=solve(temp,i+1,k);
        temp[i]-=(2*k);
        int sub=1e8;
        if(temp[i]>=0){
            sub=solve(temp,i+1,k);
        }
        int my=(*max_element(nums.begin(),nums.end())-*min_element(nums.begin(),nums.end()));
        return min(add,min(my,sub));

        
} */

int main()
{
    fastio;
      vector<int> nums={3, 9, 12, 16, 20};
       int n=nums.size();
        int k=3;

 /*    cout<<solve(nums,0,k); */

    sort(nums.begin(),nums.end());
    int ans=nums[n-1]-nums[0];
    int l=nums[n-1]-k;
    int s=nums[0]+k;
    int maxi,mini;
    for(int i=0;i<n-1;i++){
       maxi=max(l,nums[i]+k);
       mini=min(s,nums[i+1]-k);
       if(mini<0){
        continue;
       }
       else{
        ans=min(ans,maxi-mini);
       }
    }

cout<<ans;
    return 0;
}