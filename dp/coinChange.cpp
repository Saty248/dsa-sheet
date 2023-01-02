#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int minCoin(vector<int>& coins, int amount){
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return 1e9;
    }
    int ans=1e9;
    for(int i=0;i<coins.size();i++){
      
             ans=min(ans,minCoin(coins,amount-coins[i])+1);
        
        
    }
    
    return ans;
}
int main()
{
    fastio;
    vector<int> coins={2,5,11};
     int amount=3;
     
    bool f=false;
   
        int n=minCoin(coins,amount);
        if(n>=1e9){
            cout<<-1;
        }else{
            cout<<n;
        }
    

    return 0;
}