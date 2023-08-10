#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool helper( vector<vector<char>> &matrix,int i,int j){

    if(matrix[i][j]=='1'){
        return true;
    }else{return false;
    }
}

int solve(vector<vector<char>> &matrix,int i,int j,vector<vector<int>> &final){
    if(i>=matrix.size() || j>=matrix[0].size()){
        return 0;
    }
    if(final[i][j]!=-1){
        return final[i][j];
    }
   
        if(helper(matrix,i,j)){
            int ans=INT_MAX;
                ans=min(ans,solve(matrix,i,j+1,final));
                ans=min(ans,solve(matrix,i+1,j+1,final));
                ans=min(ans,solve(matrix,i+1,j,final));
                final[i][j]=ans+1;
                return final[i][j];
            
        }else{
            int ans=INT_MAX;
                ans=min(ans,solve(matrix,i,j+1,final));
                ans=min(ans,solve(matrix,i+1,j+1,final));
                ans=min(ans,solve(matrix,i+1,j,final));
            final[i][j]=0;
             return final[i][j];
        }
    

}

int main()
{
    fastio;
    vector<vector<char>> matrix = {{'1','0','1','0','0'}  ,{'1','0','1','1','1'},
    {'1','1','1','1','1'},
    {'1','0','0','1','0'} };
    vector<vector<int>> final(matrix.size(),vector<int>(matrix[0].size(),-1)); 
        cout<<"solve="<<solve(matrix,0,0,final)<<endl;


cout<<final.size()<<endl;
cout<<final[0].size()<<endl;
int ans=INT_MIN;
        for(auto val:final){
            for(auto v:val){
                cout<<v<<"  ";
                ans=max(ans,v);
            }
            cout<<endl;
        }
        cout<<"ans="<<ans*ans<<endl;
    return 0;
}

/*   */