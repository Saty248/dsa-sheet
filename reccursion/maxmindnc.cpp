#include<bits/stdc++.h>
using namespace std;
void maxmin(int nums[],int low,int high,int &min,int &max){
if(low==high){
if (max < nums[low]) {           // comparison 1
            max = nums[low];
        }
 
        if (min > nums[high]) {          // comparison 2
            min = nums[high];
        }
 
        return;
    }
    if(high-low==1){
        if (nums[low] < nums[high])       // comparison 1
        {
            if (min > nums[low]) {       // comparison 2
                min = nums[low];
            }
 
            if (max < nums[high]) {      // comparison 3
                max = nums[high];
            }
        }
        else {
            if (min > nums[high]) {      // comparison 2
                min = nums[high];
            }
 
            if (max < nums[low]) {       // comparison 3
                max = nums[low];
            }
        }
        return;
    }

    int mid=low+(high-low)/2;
    maxmin(nums,low,mid,max,min);
    maxmin(nums,mid+1,high,max,min);
}

int main(){
    int a1[7]={1, 4, 3, -5, -4, 8, 6};

    int max=INT_MIN;
    int min=INT_MAX;
    
    maxmin(a1,0,6,min,max);

    cout<<"min="<<min;
    cout<<"max="<<max;
    return 0;

}