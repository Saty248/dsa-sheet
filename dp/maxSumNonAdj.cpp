#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve1(vector<int> &nums,int n){
    if(n==0){
        return n;
    }
    if(n<0){
        return 0;
    }
    int inc=solve1(nums,n-2)+nums[n];
        int exc=solve1(nums,n-2)+0;
        return max(inc,exc);
}




int main()
{
    fastio;
    vector<int> nums={3,8,2,1,7,9,11};
    int n=size(nums);
   
    return 0;
}