#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int solve(int n, int k, int target){
    
    if(n==0 && target==0) return 1;
    if(n==0 && target!=0) return 0;
    if(n!=0 && target==0) return 0;
    if(n==0) return 0;
    if(target<0) return 0;
    int sum=0;
    for(int i=1;i<=k;i++){
        sum=sum+solve(n-1,k,target-i);
    }
    return sum;
}
int main()
{
    fastio;
    cout<<solve(2,6,7);
    // code goes here
    return 0;
}