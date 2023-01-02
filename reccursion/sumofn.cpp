
#include<bits/stdc++.h>
using namespace std;
 
int sumofn(int n){
    if(n==0){
        return 0;
    }
    
    
    int s2;
    return sumofn(n-1)+n;
    
   

}



int main(){
   int n=3;
int s3=sumofn(n);
cout<<s3<<endl;
    return 0;

}