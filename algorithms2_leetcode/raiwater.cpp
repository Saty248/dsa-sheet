#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int maxArea(vector<int>& height) {
        
        int pl=0,pr=height.size()-1,ans=0;
        while(pl<pr){
            if(height[pl]<height[pr]){
                ans=max(ans,height[pl]*(pr-pl));
                pl++;
            }
            else{
                ans=max(ans,height[pr]*(pr-pl));
                pr--;
            }

        }
        return ans;
    }

int main()
{
    fastio;
   vector<int> height = {1,8,6,2,5,4,8,3,7};
   cout<<maxArea(height)<<endl;
    return 0;
}






   