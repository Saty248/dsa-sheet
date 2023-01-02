#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int paint(int n,int k,vector<int> &dp){
    if(n==1){
        return k;
    }
    if(n==2){
    return k+(k*(k-1));
    }
    if(dp[n]!=-1)
    return dp[n];
     dp[n]= (paint(n-2,k,dp)+paint(n-1,k,dp))*(k-1);
    return dp[n];
}





int main()
{
    fastio;
    int n=3;
    vector<int> dp(n+1,-1);
    int k=3;
  
   int prev1=k;
   int prev2=k+(k*(k-1));
 
    for(int i=3;i<=n;i++){
    
         int ans=(prev2+prev1)*(k-1);
        prev1=prev2;
        prev2=ans;
    }
cout<<prev2;
    return 0;
}