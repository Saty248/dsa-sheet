#include<bits/stdc++.h>
using namespace std;


void printit(int n){
    if(n<2){
        cout<<1;
    }
    else{
        cout<<n;
    printit(n-1);
    
    }

}
int main(){
    printit(6);
    
    return 0;
}