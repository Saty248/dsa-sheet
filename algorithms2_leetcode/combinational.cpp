#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<vector<int>> comsum(vector<int> p,vector<int> up,int target,int s){
    vector<vector<int>> curr;
    if(target==0){
        curr.push_back(p);
        return curr;
    }
    if(target<0 || s==up.size()){
        return {};
    }


    for(int i=s;i<up.size();i++){
        int t=target;
        t-=up[i];
        p.push_back(up[i]);
        vector<vector<int>> ansbel=comsum(p,up,t,i+1);
        curr.insert(curr.end(),ansbel.begin(),ansbel.end());
        p.pop_back();
    }

    return curr;

}

int main()
{
    fastio;
    vector<int> candidates={10,1,2,7,6,1,5};
    int target=8;
    sort(candidates.begin(),candidates.end());
    
    vector<vector<int>> ans=comsum({},candidates,target,0);

    for(auto val:ans){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
     }
    return 0;
}