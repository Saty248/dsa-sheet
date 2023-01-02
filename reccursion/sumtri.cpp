#include<bits/stdc++.h>
using namespace std;

int newtri(int a[],int size){
    if(size<=1){
        return a[0];
    }
    int a1[size-1];
    for(int i= 0;i<size-1;i++){
        a1[i]=a[i]+a[i+1];


    }

    return newtri(a1,--size);




}




int main(){
    int* a1=new int[5];
    cout<<"enter the elemnets"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a1[i];
    }
    int sum;
    sum=newtri(a1,5);
    cout<<"sum="<<sum;
    return 0;
}