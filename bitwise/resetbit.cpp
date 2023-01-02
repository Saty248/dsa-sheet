#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int i=2; 
    int x;          
    x=n&(~(1<<i-1));
    cout<<x<<endl;
    return 0;
}