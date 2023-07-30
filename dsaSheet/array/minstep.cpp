#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

 int minJumps(int arr[], int n,int i,int c){
        // Your code here
if(i>=n) return c;
        int ans=INT_MAX;
        for(int j=1;j<=arr[i];j++){
                ans=min(ans,minJumps(arr,n,i+j,c+1));
        }

        return ans;
    }


int main()
{
    fastio;

    int arr[]={1, 4, 3, 2, 6, 7}; 
    
    cout<<minJumps(arr,5,0,0);   // code goes here
    return 0;
}