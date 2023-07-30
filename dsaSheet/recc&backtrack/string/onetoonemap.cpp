#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool areIsomorphic(string str1, string str2)
    {
        if(str1.size()!=str2.size()){
        cout<<1;
        return false;
    }

        
    
        
        // Your code here
        map<char,char> m1;
        map<char,int> m2;
        
        for(int i=0;i<str1.size();i++){
            if(m1.find(str1[i])==m1.end() &&m1.find(str2[i])==m1.end()){
                    m1[str1[i]]=str2[i];
                    m1[str2[i]]=str1[i];
                
            }else{
                        if(m1[str1[i]]!=str2[i] ||m1[str2[i]]!=str1[i] ){
                           // cout<<m1[str1[i]]<<str2[i];
                           cout<<2;
                            return false;
                        }
                    }
        }
        

       
    //cout<<m1.size()<<" "<<m2.size();
    
    
    cout<<3;
    return true;

        
    }
int main()
{
    fastio;
    string str1,str2;
    str1 = "xudzhi";
str2 = "ftakcz";
cout<<areIsomorphic(str1,str2);
    return 0;
}