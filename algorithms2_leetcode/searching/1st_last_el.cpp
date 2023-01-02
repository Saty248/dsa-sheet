#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> nums={5,7,7,8,8,10};
    int s,e,m,target=8,k1,k2;
    s=0;
    e=nums.size()-1;

    while(s<=e){
        m=s+(e-s)/2;
        if(nums[m]==target){
            k1=m;
            e=m-1;
            continue;
        }
        if(target<nums[m]){
            e=m-1;
            continue;
        }
        if(target>nums[m]){
            s=m+1;
            continue;
        }
    }
    s=0;
    e=nums.size()-1;
    while(s<=e){
        m=s+(e-s)/2;
        if(nums[m]==target){
            k2=m;
            s=m+1;
            continue;
        }
        if(target<nums[m]){
            e=m-1;
            continue;
        }
        if(target>nums[m]){
            s=m+1;
            continue;
        }
    }
    cout<<k1<<" "<<k2<<endl;
    return 0;
}