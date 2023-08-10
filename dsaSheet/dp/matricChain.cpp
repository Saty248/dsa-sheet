#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int solve(int n,int arr[],int i,int j){
    if(i==j){
    return 0;
}
int ans=INT_MAX;
for(int k=i;k<j;k++){
ans=min(ans,solve(n,arr,i,k)+solve(n,arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]));
}
return ans;
}
int main()
{
    fastio;
    // code goes here

    int arr[]={40, 20, 30, 10, 30};
    int n=5;

    cout<<solve(n,arr,1,n-1);

    return 0;
}