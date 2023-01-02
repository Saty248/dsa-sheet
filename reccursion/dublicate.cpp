#include<bits/stdc++.h>
using namespace std;

string dubl(string s,int i,string ans){
    if(i==(s.length()-1)){
        ans+=s[i];
        return ans;
    }
    if(s[i]==s[i+1]){
       return dubl(s,++i,ans);
       
    }
    else{
        ans=ans+s[i];
        return dubl(s,++i,ans);
    }
}

int main(){
    string s="aaaabbb";
    string s2;
    s2=dubl(s,0,"");

    cout<<s2<<endl;

    return 0;
}