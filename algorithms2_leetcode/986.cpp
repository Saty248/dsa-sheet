#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<vector<int>> fl={{0,2},{5,10},{13,23},{24,25}};
    vector<vector<int>> sl={{1,5},{8,12},{15,24},{25,26}};
    vector<vector<int>> final;
    int m,n,s,e;
     m=fl.size();
     n==sl.size();   
    vector<int> ans;
    int i=0,j=0;
    while(i<m && j<n){
        s=max(fl[i][0],sl[j][0]);
        e=min(fl[i][1],sl[j][1]);
        if(s<=e){
            ans.push_back(s);
            ans.push_back(e);
            final.push_back(ans);
            ans.clear();
        }
        if(e==fl[i][1]){
            i++;
        }
        if(e==sl[j][1]){
            j++;
        }
    
    }
    
    for(auto val:final){
        cout<<val[0]<<" "<<val[1]<<endl;
    }


    return 0;
}