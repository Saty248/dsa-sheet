#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int maxiSq(vector<vector<char>>& matrix,int i,int j,int &maxi) {
        if( i>=matrix.size() || j>=matrix[0].size()){
            return 0;
        }
         int r=maxiSq(matrix,i,j+1,maxi);
            int b=maxiSq(matrix,i+1,j,maxi);
            int d=maxiSq(matrix,i+1,j+1,maxi);
        
        if(matrix[i][j]=='1'){
           
            int ans=1+min(r,min(d,b));
            maxi=max(maxi,ans);
            return ans;
        
       }
      else{
        return 0;
      }
    }



int main()
{
    fastio;
    vector<vector<char> > matrix={{'0','1'},{'1','0'}};
    int maxi=0;
    int k=maxiSq(matrix,0,0,maxi);
    cout<<k*k;

    return 0;
}