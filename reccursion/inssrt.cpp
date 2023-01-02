
#include<bits/stdc++.h>
using namespace std;
 
void insrt(vector<int>& v1,int r,int c){
    if(r==v1.size() -1){
        return;
    }
        if(c>0){
        if(v1[c]<v1[c-1]){
            swap(v1[c],v1[c-1]);
        }
        insrt(v1,r,--c);
    }
    else{
        insrt(v1,r+1,r+2);
    }
    
}
int main(){
    vector<int> v={2,5,3,1,4};
    insrt(v,0,1);
    for(auto val: v){

    cout<<val<<endl;
}
    return 0;

}