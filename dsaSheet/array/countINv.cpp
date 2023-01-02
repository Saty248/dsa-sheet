#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int merge(vector<int> &nums,int l,int m, int r,vector<int> &temp){
    int i=l;
    int j=m;
    int k=l;
    int c=0;
    while(i<m && j<=r){
        if(nums[i]<nums[j]){
           temp[k++]=nums[i++];

        } else {
            temp[k++] = nums[j++];

           
            c+= (m - i);
        }
        }
        while (i <= m - 1)
        temp[k++] = nums[i++];

  
    while (j <= r)
        temp[k++] = nums[j++];

    /*Copy back the merged elements to original array*/
    for (i = l; i <= r; i++)
       nums[i] = temp[i];

   
    
     return c;
}
int mergeSrt(vector<int> &nums,int l, int r,vector<int> &temp){
    int c=0;
    if(l<r){
        int m=l+(r-l)/2;
        c+=mergeSrt(nums,l,m,temp);
        c+=mergeSrt(nums,m+1,r,temp);
        c+=merge(nums,l,m+1,r,temp);
    }
    return c;
}


int main(){
    fastio;
    vector<int> nums={2, 4, 1, 3, 5 };
    vector<int> temp(nums.size());
    cout<<mergeSrt(nums,0,nums.size()-1,temp);
    return 0;
}