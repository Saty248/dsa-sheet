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
    sort(nums.begin(),nums.end());
    int s,e,m,target=2,k=0;
    s=0;
    e=nums.size()-1;
    while(s<=e){
        m=s+(e-s)/2;
        if(target==nums[m]){
            k=1;
            cout<<nums[m]<<endl;
            break;
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

    if(k==0){
        cout<<nums[s];
    }


    return 0;
}