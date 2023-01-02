#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
long long maxSubarraySum(int arr[], int n){
        int csum=0,msum=0;

        for(int i=0;i<n;i++){
            if(arr[i]<0){
                msum=max(msum,csum);
                csum=0;
            }else{
                csum=csum+arr[i];
            }
        }
        return msum;
        
        
    }
int main()
{
    fastio;
    
    return 0;
}