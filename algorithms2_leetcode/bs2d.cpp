#include<bits/stdc++.h>
using namespace std;


/* bool search(vector<int> arr, int target,int s,int e){
        if(s>e){
            return false;
        }
        int mid=s+ (e-s) /2;
        if(arr[mid]==target){
            return true;
        }
        if(target<arr[mid]){
            return search(arr,target,s,mid-1);
        }
        if(target>arr[mid]){
            return search(arr,target,s,mid-1);
        }
        return false;
    } */
    int search(vector<int> nums,int t,int s,int e){
            if(s>e){
                return false;
            }
            int mid=s+(e-s) /2;
            if(nums[mid]==t){
                return true;
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
    

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int r=matrix.size();
        cout<<r<<endl;
        
        int c=matrix[0].size();
        
        cout<<c<<endl;
        for(int i=0;i<r;i++){
            if(target<=matrix[i][c-1]){
                if(target==matrix[i][c-1]){
                    return true;
                }
                return search(matrix[i],target,0,c-1);
            }
        }
        return false;
    }

    int main(){
 vector<vector<int>> arr1={{1,3,5,7},{10,11,16,20},{23,30,34,50}};
   bool k;
    int c=5;
    
    k=searchMatrix(arr1,c);
    
        cout<<k<<endl;
    
    return 0;
}