#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int solve(vector<int> prices,int i,int buy,int n){
    if(i==n){
        return 0;
    }
    int profit=INT_MIN;
    if(buy==1){
        profit=max(-prices[i]+solve(prices,i+1,0,n),0+solve(prices,i+1,1,n));
    } else{
        profit=max(prices[i]+solve(prices,i+1,1,n),0+solve(prices,i+1,0,n));
    }
    return profit;
   
}


int main()
{
    fastio;
    vector<int> prices={7,1,5,3,6,4};
    return 0;
}