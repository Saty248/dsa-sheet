#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int k;
    if(n==0 || n==1){
        return 1;
    }
    k=n*factorial(n-1);
    return k;


}



int main(){

    int k;
    k=factorial(5);
    cout<<k;
    return 0;
}