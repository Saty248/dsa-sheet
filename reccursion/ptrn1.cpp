#include <bits/stdc++.h>
using namespace std;
void ptrn1(int r, int c){
    if(r==0 && c==0){
        return ;
    }
    
    if(r>c){
        ptrn1(r,c+1);
        cout<<"*"<<" ";
        
    }
    else{
        
        ptrn1(r-1,0);
        cout<<"\n";
    }
}


int main(){
    ptrn1(4,0);
    return 0;

}