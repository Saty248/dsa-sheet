#include<bits/stdc++.h>
using namespace std;

int geeko(int n,int a,int b,int sum){
    if(n<=1){
        int sum=a+b;
        return sum;
    }
    
    return geeko(n-1,b,sum);




}




int main(){
    int* a1=new int[5];
    cout<<"enter the elemnets"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a1[i];
    }
    int sum;
    sum=geeko(a1,5);
    cout<<"sum="<<sum;
    return 0;
}