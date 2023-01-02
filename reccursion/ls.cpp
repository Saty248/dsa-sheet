#include<bits/stdc++.h>
using namespace std;

string ls(int a[],int l,int c){
    if(l==4){
        return "not found";
    }
    if((a[l])==c){
        return "found";
        }
        return ls(a,l+1,c);
    }




int main(){
    string k;
    int a[4]={1,2,3,4};
    k=ls(a,0,3);
    cout<<k;
    return 0;
}