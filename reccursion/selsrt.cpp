#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int r,int c, int max){
    if(r==0){
        return ;
    }
    
    if(r>c){
        if(arr[c]>arr[max]){
             
              selection(arr,r,c+1,c);
        }
        else{
             selection(arr,r,c+1,max);
        }
    }
    else{
        swap(arr[max],arr[r-1]);
        selection(arr,r-1,0,0);
    }


}

int main(){
    int arr[5]={2,4,6,5,1};

    selection(arr,5,0,0);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


