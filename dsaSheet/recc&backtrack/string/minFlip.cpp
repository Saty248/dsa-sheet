#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

//000
string pttrn1(string s1,string s2){
return s1+'1'+s2;
}

//111
string pttrn2(string s1,string s2){
return s1+'0'+s2;
}


int minFlips (string S)
{
    // your code here
    if(S.size()==1){
        return 0;
    }
    int ans=0;
    for(int i=1;i<S.size()-1;i++){
        cout<<"here1"<<endl;
        

        if(S[i]=='0' && S[i-1]=='0' && S[i+1]=='0'){
            S=pttrn1(S.substr(0,i),S.substr(i+1));
            
            ans++;
            cout<<"here1"<<endl;
            cout<<S<<endl;
           cout<<ans<<endl;
            continue;
        }
        if(S[i]=='1' && S[i-1]=='1' && S[i+1]=='1'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
        if(S[i]=='1' && S[i-1]=='0' && S[i+1]=='0'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
        if(S[i]=='1' && S[i-1]=='0' && S[i+1]=='1'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
        if(S[i]=='0' && S[i-1]=='1' && S[i+1]=='0'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
        if(S[i]=='0' && S[i-1]=='1' && S[i+1]=='1'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
        if(S[i]=='1' && S[i-1]=='1' && S[i+1]=='0'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
        if(S[i]=='0' && S[i-1]=='0' && S[i+1]=='0'){
            S=pttrn2(S.substr(0,i),S.substr(i+1));
            ans++;
            cout<<"here2"<<endl;
           cout<<S<<endl;
          cout<<ans<<endl;
            continue;
        }
    }

    
            cout<<"here2"<<endl;
            if(S[0]=='0' && S[1]=='0'){
                
                S='1'+S.substr(1);
                ans++;
               cout<<"here3"<<endl;
            }else if(S[0]=='1' && S[1]=='1'){
                S='0'+S.substr(1);
                ans++;
                cout<<"here3"<<endl;
            }
            
        
            
           cout<<S<<endl;
           cout<<ans<<endl;
            if(S[(S.size()-1)]=='0' && S[(S.size()-1)-1]=='0'){
                S=S.substr(0,(S.size())-1)+'1';
                ans++;
               cout<<"here4"<<endl;
            } else if(S[(S.size()-1)]=='1' && S[(S.size()-1)-1]=='1'){
                S=S.substr(0,(S.size())-1)+'0';
                ans++;
                cout<<"here4"<<endl;
            }
          
        


    cout<<S<<endl;
    return ans;
}

int main()
{
    fastio;
    string s="1111110000000000000";
             
    cout<<minFlips(s);

    return 0;
}