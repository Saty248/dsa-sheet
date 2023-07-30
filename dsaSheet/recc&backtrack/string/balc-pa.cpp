#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int countRev (string s)
{
    // your code here
    
    int o1;
    int c1;
    int rc=0;
    
    
    for(auto val:s){
        if(val=='{'){
           
          o1++;  
         // cout<<val <<" "<<o1<<endl;
            
        }
        if(val=='}'){
            if(o1>0){
                o1--;
                //cout<<val <<" "<<o1<<endl;
            }else{
                o1++;
                rc++;
                //cout<<val <<" "<<rc<<"  "<<o1<<endl;
            }
        }
    }

   /*  cout<<" rc "<<rc<<endl;
    cout<<" o1 "<<o1<<endl; */
    
    if(o1%2==0){
        o1=o1/2;
        rc=rc+o1;
        return rc;
    }else{
        return -1;
    }
}


int main()
{
    fastio;
    // code goes here

    string s="{{}{{{}{{}}{{";
    cout<<countRev(s);
    return 0;
}