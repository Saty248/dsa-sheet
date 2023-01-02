#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<vector<int>> comsum1(vector<int> p,vector<int> up,int target,int n){
    vector<vector<int>> temp;
    if(target==0){
         temp.push_back(p);
         return temp;
    }
    if(target<0){
        return {};
    }
    for(int i=0;i<size(up);i++){
        int t=target;
        p.push_back(up[i]);
        t-=up[i];
       vector<vector<int>> ansbel=comsum1(p,up,t,i);
        temp.insert(temp.end(),ansbel.begin(),ansbel.end());
        p.pop_back();
    }
    return temp;
}
vector<vector<int>> comsum3(vector<int> p,vector<int> up,int target,int n,vector<vector<int>>ans){
    
    if(target==0){
         ans.push_back(p);
         return ans;
    }
    if(target<0){
        return {};
    }
     vector<vector<int>> ansbel;
    for(int i=0;i<size(up);i++){
        int t=target;
        p.push_back(up[i]);
        t-=up[i];
       ansbel=comsum3(p,up,t,i,ans);
       
        
        p.pop_back();
    }
    return ansbel;
}

vector<vector<int>> comsum2(vector<int> p,vector<int> up,int target,int n){
    vector<vector<int>> temp;
    if(target==0){
         temp.push_back(p);
         return temp;
        }
        if(target<0){
        return {};
    }
    for(int i=n;i<up.size();i++){
        if(i>n && up[i]==up[i-1]) {
            continue;
        }
            if(up[i]>target){
                 break;
                 }
        int t=target;
        t-=up[i];
        p.push_back(up[i]);
        vector<vector<int>> ansbel=comsum2(p,up,t,i+1);
        temp.insert(temp.end(),ansbel.begin(),ansbel.end());
        p.pop_back();
    }
    return temp;
    }


int main()
{
    fastio;
    vector<int> nums={1,2,3};
     int target=4;
     sort(nums.begin(),nums.end());
    vector<vector<int>> ans=comsum3({},nums,target,0,{});
    for(auto val:ans){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}