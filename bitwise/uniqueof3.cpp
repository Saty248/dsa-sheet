#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={2,5,5,2,5,2,6};
    vector<int> v2(8);
    int a,c;
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        c=7;
        a=v1[i];
        while(a!=0){
        if(a&1==1){
            v2[c]+=1;
            c--;
            a=a>>1;
        }
        else{
            a=a>>1;
            c--;
        }
        }
    }
    for(auto val:v2){
        val=val%3;
        cout<<val<<" ";
    }
    return 0;
}