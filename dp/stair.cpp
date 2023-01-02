#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int stairs(int n,int k){
    if(n==0 || n==1){
        return 1;
    }
    if(n>1){
        
            k=stairs(n-1,k)+stairs(n-2,k);
            
        }
        
            
        
    return k;
    }
    


int main()
{
    fastio;
    int n;
    vector<int> st(n+1,-1);

    return 0;
}