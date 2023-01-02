#include<bits/stdc++.h>
using namespace std;

int countzero(int n,int s){
    if(n==0){
        return s;
    }
    int r;
    r=n%10;
    if(r==0){
        s=s+1;
    }
    return countzero(n/10,s); 

}

int main(){
    int k;
    k=countzero(123004,0);
    cout<<k;
    return 0;
}