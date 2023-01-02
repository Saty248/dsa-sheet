#include<bits/stdc++.h>
using namespace std;

int main(){
    int pow=6;
    int base=3; 
    int x=1;          
    while(pow>0){
        
        if(pow&1==1){
            x*=base;
        }
    base*=base;
    pow=pow>>1;
    }
    cout<<x<<endl;
    return 0;
}