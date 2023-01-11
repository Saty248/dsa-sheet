#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    
        int nums[]={ 5 , 67, 123, 125,1, 3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int e=n-1;
    int s=0;
    int x=5;
        e=e-1;
        int roIn=-1;
        while(e>=s){
        int mid=s+(e-s)/2;
        if(nums[mid+1]<nums[mid] && s<e){
        roIn= mid;
        break;}

        if(nums[mid]<nums[mid-1] && s<e){
        roIn= mid;
        break;
        }
        if(nums[s]>nums[mid]){
            e=mid-1;
        }else if(nums[s]<nums[mid]){
            s=mid+1;
        }
        }
        cout<<roIn;
    return 0;
}