#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s="ab#c";
    string t= "ad#c";
    stack<char> s1;
    stack<char> s2;

    int n1=s.size(),n2=t.size();
    for(int i=0;i<n1;i++){
        if(s[i]=='#' && s1.size()!=0){
            s1.pop();
        }
        if(s[i]!='#'){
            s1.push(s[i]);
        }
    }

    for(int i=0;i<n2;i++){
        if(t[i]=='#' && s2.size()!=0){
            s2.pop();
        }
        if(t[i]!='#'){
            s2.push(t[i]);
        }
    }

int flag=0;
    while(s1.size()>0 ||s2.size()>0){
        if(s1.size()!=s2.size()){
            flag=1;
            break;

        }
        if(s1.top()==s2.top()){
            s1.pop();
            s2.pop();
        }
        if(s1.top()!=s2.top()){
            flag=1;
            break;
        }


    }

    if(flag==0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}