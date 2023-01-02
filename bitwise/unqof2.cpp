#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    vector<int> v={2,6,4,6,2};
    int x;
    vector<int> :: iterator it;
    for(it=v.begin()+1;it<v.end();++it){
        x=x^(*it);
    }
    cout<<x<<endl;
    return 0;
}