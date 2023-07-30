#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void display(vector<string> &ans){
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}

bool match(string pro,int n, vector<string>& dict){
    for(auto val:dict){
        if(val==pro){
            return true;
        }
    }
    return false;
}

void word(string s,vector<string> ans,int cnt,int i,string pro,int n, vector<string>& dict){
    if(i==s.length()){
        if(cnt==s.length()-1){
            display(ans);
        }
        return;
    }
    pro=pro+s[i];
    i++;
    if(match(pro,n,dict)){
        ans.push_back(pro);
        word(s,ans,i-1,i,"",n,dict);
        ans.pop_back();
    }
    word(s,ans,cnt,i,pro,n,dict);

}

int main()
{
    fastio;
     vector<string> dict= {"cats", "cat", "and", "sand", "dog"};
    int n=dict.size();
    vector<string> ans;
    string s="catsandog";
    word(s,ans,0,0,"",n,dict);
    return 0;
}