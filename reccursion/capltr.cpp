#include<bits/stdc++.h>
using namespace std;
 char capl(string s){
        int l= s.length();
        if(l == 0){
            return 0;
            
        }
        string s1;

        
        
        if(isupper(s[0])){
            return s[0];
        }
        else{
            return capl(s.substr(1));
            
        }

    }
int main(){
    string s1="geeKs";
    string s2;
    s2=capl(s1);
    cout<<s2<<endl;
   

    return 0;
    }