#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isPalin(string s){
    string s1=s;
    reverse(s.begin(),s.end());
    if(s==s1){
        return true;
    }else{
        return false;
    }
}

void wordpalin(string s,int i,int j){
    int l=s.length();
    if(i==l || j==l){
     string s1;
    s1=s.substr(i,j);
    if(isPalin(s1)){
        cout<<s1<<" ";
    }
        return;
    }
    string s1;
    s1=s.substr(i,j);
    if(isPalin(s1)){
        cout<<s1<<" ";
    }
    wordpalin(s,i,j+1);
    
    wordpalin(s,j+1,j+1);
}

int main()
{
    fastio;
    string str="abc";
    /* string s1;
    s1=str.substr(0,0);
    cout<<s1; */
    wordpalin("nitin",0,1);
    return 0;
}