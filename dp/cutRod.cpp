#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int cut1(vector <int> dp,    int n){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int x=cut1(dp,n-5)+1;
    int y=cut1(dp,n-3)+1;
    int z=cut1(dp,n-2)+1;
    dp[n]= max(x,max(y,z));
    return dp[n];
}
int main()
{
    fastio;
    
    
    int n=7;
    vector <int> dp(n+1,-1);
    cout<<cut1(dp,n);
    return 0;
}