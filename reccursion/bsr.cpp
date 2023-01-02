#include<bits/stdc++.h>
using namespace std;


int bsa(int arr[],int c,int l,int r){
    int mid=l+(r-l)/2;
    if(mid==c){
        return mid;
    }
    if(arr[l]<arr[mid]){
        if(c>=arr[l] && c<arr[mid]){
            return bsa(arr,c,l,mid-1);
        }
        else{
           return bsa(arr,c,mid+1,r); 
        }
        else
    }   
    
    

}


int main(){
    int arr1[7]={5,6,7,8,1,2,3};
    int k;
    int c=2;
    
    k=bsa(arr1,c,0,7);
    cout<<k;
    return 0;
}











/* if(l>r){
        return -1;
    }
        int m=l+(r-l)/2; 
        if(c==arr[m]){
        return m;
    }
        if(arr[l]<=arr[r]){
            if(c>=l && c>=r){
                return bsa(arr,c,l,m-1);
            }
            else{
                return  bsa(arr,c,m+1,r);
                }
    }
        if(c>=arr[m] && c<=arr[r]){
            return bsa(arr,c,m+1,r);
    }
    return bsa(arr,c,l,r-1);
     */