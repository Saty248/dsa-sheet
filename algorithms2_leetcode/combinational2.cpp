#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<vector<int>> comb2(int pos,int target,vector<int> nums,vector<int> ds){
    vector<vector<int>> curr;
    if(target==0){
        curr.push_back(ds);
        return curr;
    }

    for(int i=pos;i<nums.size();i++){
        if(i>pos && nums[i]==nums[i-1]) {
            continue;
        }
            if(nums[i]>target){
                 break;
                 }
         ds.push_back(nums[i]);
          vector<vector<int>> ansbel=comb2(i+1,target-nums[i],nums,ds);
        curr.insert(curr.end(),ansbel.begin(),ansbel.end());
         
         ds.pop_back();        
            
    }
    return curr;
   
}
int main()
{
    fastio;
    vector<int> candidates={10,1,2,7,6,1,5};
    int target=8;
    sort(candidates.begin(),candidates.end());
     vector<int>ds;
     vector<vector<int>> ans=comb2(0,target,candidates,ds);
    


    for(auto val:ans){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
     }
    return 0;
}