#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int c,int l,int r){
    
    if(l>r){
        return -1;
    }
        int m=l+(r-l)/2; 
        if(c==arr[m]){
        return m;
    }
        if(c<arr[m]){
          return  bs(arr,c,l,m-1);
    }
        if(c>arr[m]){
          return  bs(arr,c,m+1,r);
    }
    
    
    

}


int main(){
    int arr1[5]={1,2,3,4,5};
    int k;
    int c=4;
    int l=sizeof(arr1)/sizeof(arr1[0]);
    k=bs(arr1,c,0,1);
    cout<<k<<" "<<l;
    return 0;
}