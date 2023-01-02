#include<bits/stdc++.h>
using namespace std;

vector<int>bs(vector<int>& nums, int target) {
        
       vector<int> res;
res.push_back(firstidx(nums,target));
res.push_back(lastidx(nums,target));
return res;
}

int firstidx(vector<int> &nums,int target)
{
int idx=-1;
int l=0;
int r=nums.size()-1;
while(l<=r)
{
int mid=l+(r-l)/2;

if(nums[mid]==target)
{
     idx=mid;
    r=mid-1;
 }
if(nums[mid]>=target)
{
    r=mid-1;
}
else
{
    l=mid+1;
}
}
   return idx;
}
int lastidx(vector<int> &nums,int target)
{
int idx=-1;
int l=0;
int r=nums.size()-1;
while(l<=r)
{
int mid=l+(r-l)/2;

 if(nums[mid]==target)
 {
    idx=mid;
     l=mid+1;
 }
 if(nums[mid]<=target)
 {
    l=mid+1;
 }
else
{
     r=mid-1;
}
 }
return idx;
}



int main(){
 vector<int> arr1={5,7,7,8,8,10};
   vector<int> k;
    int c=10;
    
    k=bs(arr1,c);
    for(auto val:k){
        cout<<val<<endl;
    }
    return 0;
}