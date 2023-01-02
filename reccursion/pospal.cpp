#include<bits/stdc++.h>
using namespace std;

bool palin(string s){
    string s1;
    int l;
    l=s.length();
    for(int i=l-1;i>=0;i--){
       s1+=s[i]; 
    }
    if(s1==s){
        return true;
    }
    else{
        return false;
    }
}

vector<string> pospal(string s,int i,int j){
    vector<string> s3;
    int l=s.length();
    if(i==l-1){
        return s3;
    }
    string s1;
    s1=s.substr(i,j);
    if(j==l){
        if(palin(s1)){
        s3.push_back(s1);//answer for current func call

    }
        vector<string> ansbel= pospal(s,i+1,1);
        for(auto val:ansbel)
            {
                s3.push_back(val);
                }
        return s3;
    }
    if(palin(s1)){
        s3.push_back(s1);

    }
     vector<string> ansbel= pospal(s,i,j+1);
     for(auto val:ansbel)
            {
                s3.push_back(val);
                }
        return s3;
    



}



int main(){
    string n1="nitin";
   vector<string> s= pospal(n1,0,1);
    
                cout<<s[0]<<endl;
               

    //cout<<x<<endl;
    return 0;
}