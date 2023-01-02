#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<vector<int>> intervals={{1,4},{4,5}};
    vector<vector<int>> ans;
         sort(intervals.begin(),intervals.end());
         int li1,li2,ci1,ci2;
         li1=intervals[0][0];
          li2=intervals[0][1];
          int n=intervals.size();
  for(int i=1;i<n;i++){
     ci1=intervals[i][0];
          ci2=intervals[i][1];
    if(li2<ci1){
      ans.push_back({li1,li2});
      li1=ci1;
      li2=ci2;
       if(i==(n-1)){
        ans.push_back({ci1,ci2});
      } 
    }else{
      li1=min(li1,ci1);
      li2=max(li2,ci2);
     if(i==(n-1)){
        ans.push_back({li1,li2});
      } 
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

 /* if(a==-1){
                      a=intervals[i][0];
                  }
                continue;
              }
                if(a==-1){
                      a=intervals[i][0];
                  }
               ans.push_back({a,intervals[i][1]}) ;
                a=-1; */

 /* for(auto val:ans){
            for(auto v:val){
                cout<<v<<" ";
            }
            cout<<endl;
         }  */