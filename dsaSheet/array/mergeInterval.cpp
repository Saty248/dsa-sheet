#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
   vector<vector<int>> intervals={{1,4},{4,5},{8,10},{15,18}};
   vector<vector<int>> ans;
   ans.push_back(intervals[0]);

    for(int i=1;i<size(intervals);i++){
        vector<int> t1=ans.back();
        if(t1[1]>=intervals[i][0]){
           
            if(t1[1]<intervals[i][1]){
                 ans.pop_back();
                ans.push_back({t1[0],intervals[i][1]});
            }
        }else{
            ans.push_back(intervals[i]);
        }

        
    }

    for(auto val:ans){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
    }


    return 0;
}