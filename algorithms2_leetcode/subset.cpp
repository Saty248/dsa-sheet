#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<vector<int>> subset(vector<int> p,vector<int> up){
    vector<vector<int>> curans;
    vector<vector<int>> ansbel1;
     vector<vector<int>> ansbel2;
    if(up.empty()){
        curans.push_back(p);
        return curans;
    }
    int c=up[up.size()-1];
    up.pop_back();
    ansbel1=subset(p,up);
    p.push_back(c);
    ansbel2=subset(p,up);
    for(auto val:ansbel2){
        curans.push_back(val);
    }
    for(auto val:ansbel1){
        curans.push_back(val);
    }
    return curans;
}
int main()
{
    fastio;
     vector<vector<int>> curans=subset({},{1,2,3});
     for(auto val:curans){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
     }
     
    return 0;
}