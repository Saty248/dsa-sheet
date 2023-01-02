#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void rev(vector<int> &nums,int i,int j){
    if(i>=j){
        return ;
    }
    swap(nums[i],nums[j]);
    rev(nums,i+1,j-1);

}

int main()
{
    fastio;
    vector<int> arr1={4,3,2,1};
    rev(arr1,0,size(arr1)-1);
    for(auto val:arr1){
        cout<<val<<" ";
    }
    return 0;
}