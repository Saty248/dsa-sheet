#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> nums={3,1,2};
    
        int n=nums.size();
        int l,e,k;
        l=0;
        e=n-1;
        while(l<=e){
            if(nums.size()==1 || e-l==0){
            k=e;
            break;
        }
        if(nums.size()==2 || e-l==1){
            if(nums[l]<nums[e]){
                k=l;
            }
            if(nums[l]>nums[e]){
                k=e;
            }
            break;
        }
            int m=(l+e)/2;
            if(nums[m]>nums[l]){
                if(nums[l]<nums[e]){
                    k=l;
                    break;
                }
                if(nums[l]>nums[e]){
                    if(nums[m]<nums[m+1]){
                        l=m;
                        continue;
                    }
                    if(nums[m]>nums[m+1]){
                        k=m+1;
                        break;
                    }
                }
                
            }
            if(nums[m]<nums[l]){
                e=m;
            }
        }
        cout<<nums[k]<<endl;
    return 0;
}