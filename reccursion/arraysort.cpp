#include<bits/stdc++.h>
using namespace std;

string sorted(int a[],int l){
    if(l==1 || l==0){
        return "sorted";
    }
    if(a[l-1]<a[l-2]){
        return "not";
        }
        return sorted(a,l-1);
    }




int main(){
    string k;
    int a[4]={1,2,3,4};
    k=sorted(a,4);
    cout<<k;
    return 0;
}