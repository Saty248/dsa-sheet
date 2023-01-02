#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s="ababcbacadefegdehijhklij";
    unordered_map<int ,int > count;
     unordered_map<int ,int > countfirst;
     unordered_map<int ,int > countlast;
     vector<int> ans1;
     int a=0,x=0;
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
        countlast[s[i]-'a']=i;
        
       
        
    }

    //cout<<count.size();

      for(int i=0;i<s.size();i++){

       a=max(a,countlast[s[i]-'a']);
       if(i==a){
        ans1.push_back(i-x+1);
        x=i+1;
       } 
        
    }
     for(auto val:ans1){
        cout<<val<<" ";
    }  
    return 0;
}