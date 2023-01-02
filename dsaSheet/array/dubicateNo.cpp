#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> nums={1,3,4,2,2};
    unordered_map<int,int> mp;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        if(i->second==2){
            cout<<i->first;
            break;
        }
    }
    return 0;
}