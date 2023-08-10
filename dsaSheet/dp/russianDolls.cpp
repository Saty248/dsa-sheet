#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


// Driver function to sort the 2D vector
// on basis of a particular column
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    if(v1[0]==v2[0]) return v1[1]>v2[1];
    return v1[0] >v2[0];
}





 int solve(vector<vector<int>>& envelopes,int n,int i,int j,vector<vector<int>> &dp){
    if(i==n ){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int take,notTake;
    if(j==-1 || (envelopes[i][0]>envelopes[j][0] &&envelopes[i][1]>envelopes[j][1])){
        take=1+solve(envelopes,n,i+1,i,dp);
    }
        notTake=0+solve(envelopes,n,i+1,j,dp);
       
    
    dp[i][j]=max(take,notTake);
   
    return dp[i][j];
    
} 

int main()
{
    fastio;
     // Initializing 2D vector "vect" with
    // values
    vector<vector<int> > envelopes={{5,4},{6,4},{6,7},{2,3}};
 
    // Number of rows;
    int m = envelopes.size();
 
    // N umber of columns (Assuming all rows
    // are of same size). We can have different
    // sizes though (like Java).
    int n = envelopes[0].size();
 
    // Displaying the 2D vector before sorting
    cout << "The Matrix before sorting is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << envelopes[i][j] << " ";
        cout << endl;
    }
 
    // Use of "sort()" for sorting on basis
    // of 2nd column
    sort(envelopes.begin(), envelopes.end(), sortcol);
 
    // Displaying the 2D vector after sorting
    cout << "The Matrix after sorting is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << envelopes[i][j] << " ";
        cout << endl;
    }
    vector<vector<int>> dp(envelopes.size()+1,vector<int>(envelopes.size()+1,-1));
   // cout<<solve(envelopes,m,0,0,dp);
    return 0;
}