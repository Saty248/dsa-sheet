#include<bits/stdc++.h>
using namespace std;

int sumofd(int n){
    if(n==0){
        return 0;
    }
    
    return n%10 + sumofd(n/10);
   
}


int main(){
    int k;
    k=sumofd(1234);
    cout<<k;
    return 0;
}