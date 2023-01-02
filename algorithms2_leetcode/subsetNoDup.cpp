#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void subset2(int pos,vector<int> sub,vector<int>nums,vector<vector<int>> &res){
    res.push_back(sub);

    if(pos==nums.size()){

        return;
    }

    set<int> st;
    
    for(int i=pos;i<nums.size();i++){

        int x=nums[i];

        if(st.find(x)==st.end()){

            st.insert(x);
            sub.push_back(x);
            subset2(i+1,sub,nums,res);
            sub.pop_back();
        }
    }
}
int main()
{
    fastio;
    vector<int> nums={1,2,2};
    sort(nums.begin(),nums.end());
    vector<vector<int>> res; 
    subset2(0,{},nums,res);
     for(auto val:res){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
     }
     
    return 0;
}