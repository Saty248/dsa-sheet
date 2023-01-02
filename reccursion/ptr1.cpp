#include <bits/stdc++.h>
using namespace std;
void ptrn1(int r,int c){
if(r==0){
    return;
}
if(r>c){
    cout<<"* ";
    ptrn1(r,++c);
}
else{cout<<endl;
ptrn1(--r,0);
}}



int main(){
    prt2(0,0);
    return 0;

}