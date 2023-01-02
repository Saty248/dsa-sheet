#include<bits/stdc++.h>
using namespace std;

void printar(int arr[]){
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void sumtri(int arr[], int size){
    if(size==0){
        return;
    }
    int a2[size-1];
    int k=0;
    for(int i=0;i<size-1;i++){
        a2[i]=(arr[i]+arr[i+1]);
    }
    
    sumtri(a2,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1, 2, 3, 4, 5};
    sumtri(arr,5);

}