#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(vector<int> prices,int i,int n,int &profit){
    if(i==n){
        return 0;
    }
    
    for(int j=i+1;j<prices.size();j++){
        profit=max(profit,prices[j]-prices[i]);
    }
    return solve(prices,i+1,n,profit);
}


int main()
{
    fastio;
    vector<int> prices={7,1,5,3,6,4};
    int profit=0;
    solve(prices,0,6,profit);
    cout<<profit;
    return 0;
}