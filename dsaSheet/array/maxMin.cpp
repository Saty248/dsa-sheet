#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
pair<int,int> divCon(vector<int> nums,int i,int j){
    if(i>=j){
        return {nums[i],nums[i]};
    }
    int m=i+(j-i)/2;
    pair<int,int> max1=divCon(nums,i,m);
    pair<int,int> max2=divCon(nums,m+1,j);
    int maxi=max(max1.first,max2.first);
    int mini=min(max1.second,max2.second);
    return {maxi,mini};
}
int main()
{
    fastio;
     vector<int> arr1={22, 14, 8, 17, 35, 3};
    pair<int,int> n=divCon(arr1,0,size(arr1)-1);
    cout<<"min="<<n.second<<"max="<<n.first;
    return 0;
}