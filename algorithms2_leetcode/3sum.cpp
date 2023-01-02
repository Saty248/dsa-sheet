#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> nums={-1,0,1,2,-1,-4};
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> ans;
    vector<int> temp;
    for(int i=0;i<n-2;i++){
        int a=nums[i];
        if(i>0){
            if(a==nums[i-1]){
                continue;
            }
        }
        int b=0-a;
        int j=i+1;
        int k=n-1;
        
        while(j<k){
            int current=nums[j]+nums[k]+a;
            if(current==0){
                
                temp.push_back(a);
                temp.push_back(nums[j]);
                temp.push_back(nums[k]);
                ans.push_back(temp);
                temp.clear();
                while(j<k && nums[j]==nums[j+1]){
                    j++;
                }
                j++;
            }
            if(current<0){
                j++;

            }
            if(current>0){
                k--;
            }
        }
    }
 for(auto val:ans){
        cout<<val[0]<<" "<<val[1]<<" "<<val[2]<<endl;
    }    

    return 0;
}