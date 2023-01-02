#include<bits/stdc++.h>
using namespace std;
  int search(vector<int> nums,int t,int s,int e){
            if(s>e){
                return -1;
            }
            int mid=s+(e-s) /2;
            if(nums[mid]==t){
                return mid;
            }
            if(nums[mid]>=nums[s]){
                if(nums[mid]>=t && nums[s]<=t){
                    return search(nums,t,s,mid-1);
                }
                else{
                    return search(nums,t,mid+1,e);
                }
            }
            if(nums[mid]<t && t<=nums[e]){
                return search(nums,t,mid+1,e);
            }
            else{
                return search(nums,t,s,mid-1);
            }
        }

int rbs(vector<int>& nums, int target) {
    
      int k;
      k=search(nums,target,0,nums.size()-1);

      return k;
}

int main(){
 vector<int> arr1={4,5,6,7,0,1,2};
   int k;
    int c=0;
    
    k=rbs(arr1,c);
    
        cout<<k<<endl;
    
    return 0;
}