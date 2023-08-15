#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(int s,int e){
    if(s>=e){
        return 0;
    }
    int ans=INT_MAX;
    for(int i=s;i<=e;i++){
        ans=min(ans,i + max(solve(s,i-1),solve(i+1,e)));
    }
    return ans;
}


int main()
{
    fastio;
    int n=10;
    cout<<solve(0,n);
    return 0;
}