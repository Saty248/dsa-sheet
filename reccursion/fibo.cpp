#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
     int k;
    if(n<2){
        return n;
    }
    k=fibo(n-1)+fibo(n-2);
    return k;
}

int main(){

    int k;
    k=fibo(6);
    cout<<k;
    return 0;
}