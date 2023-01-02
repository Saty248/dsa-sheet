#include<bits/stdc++.h>
using namespace std;
int n=0;
vector<string> subset(string p,string up){
    //vector<string> v;
    n++;
    cout<<n<<endl;
    cout<<"p="<<p<<endl;
    cout<<"up="<<up<<endl;
    if(up.empty()){
         vector<string> v;
         v.push_back(p);
         return v;
    } 
    char ch=up[0];
    vector<string> left=subset(p+ch,up.substr(1));
    vector<string> right=subset(p,up.substr(1));
    vector<string> &merge=left;
    merge.insert(merge.end(),right.end(),right.end());
    cout<<"arraysum="<<endl;
    for(auto it=merge.begin();it!=merge.end();++it){
        cout<<(*it)<<endl;
    }
    cout<<endl;
    return merge;
}





int main(){
    vector<string> v1=subset("","abc");

    for(auto it=v1.begin();it!=v1.end();++it){
        cout<<(*it)<<endl;
    }

    return 0;
}