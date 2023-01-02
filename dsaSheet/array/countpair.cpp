#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> nums={1, 1, 1, 1};
    unordered_map<int,int> mp;
    int k=2;
    int c=0;
    for(auto val:nums){
        mp[val]+=1;
    }
    for(auto val:nums){
        if(k-val>=0){
            
                c+=mp[k-val];
              if(k-val==val){
                c--;
              }
            }
        }
    
    cout<<c/2<<endl;


    return 0;
}