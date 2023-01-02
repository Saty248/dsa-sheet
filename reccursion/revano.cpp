#include<bits/stdc++.h>
using namespace std;

int reverse(int n,int s){
    if(n==0){
        return s;
    }
    int r;
    r=n%10;
    s=s*10 +r;
    return reverse(n/10,s); 

}

int main(){
    int k;
    k=reverse(1234,0);
    cout<<k;
    return 0;
}