#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;



int main()
{
    fastio;
    string s,p;
    s="abab";
    p="ab";
    vector<int> pv(26,0);
    vector<int> sv(26,0);
    vector<int> ans;
    for(int i=0;i<p.size();i++){
        sv[s[i]-'a']++;
        pv[p[i]-'a']++;
    }
    int np=p.size();
    np--;
    int ns=s.size();
    int right=np;
    int left=0;
    while(right<ns){
        if(sv==pv){
            ans.push_back(left);
        }
        right++;
        if(right!=ns)
            sv[s[right]-'a']++;
        sv[s[left]-'a']--;
        left++;

    }

    

    



    
    return 0;
}