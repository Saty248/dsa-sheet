#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int>nums={12,28,83,4,25,26,25,2,25,25,25,12};
    int target=213;
    sort(nums.begin(),nums.end(),greater<>());
    for(auto val:nums){
        cout<<val<<" ";

    }
    cout<<endl;
    vector<int> presum(nums.size());
    presum[0]=nums[0];
    int sum;

    for(int i=1;i<nums.size();i++){
        presum[i]=nums[i]+presum[i-1];
    }
    if(target>presum[presum.size()-1]){
        cout<<0<<endl;
        return 0;
    }

    int s=0,k,e=nums.size()-1;
    bool f=false;
    while(s<=e){
        int m=s+ (e-s)/2;
        if(presum[m]==target){
            k=m+1;
            f=true;
            break;
        }
        if(target>presum[m]){
            s=m+1;
            continue;
        }
        if(target<presum[m]){
            e=m-1;
            continue;
        }
        }
if(f==true){
    cout<<k<<endl;
}
else{
    int sum=nums[s];
    int l=0;
    
    while(sum>target){
        if((sum-nums[l])>target){
            l++;
            continue;
        }
        if((sum-nums[l])==target){
            k=s-l;
            f=true;
            break;
        }
        
    }
    if(f==true){
        cout<<s<<l<<k<<endl;
    }
    else{
        k=s-(--l);
        cout<<s<<l<<k<<endl;
    }
}

    

    return 0;
}