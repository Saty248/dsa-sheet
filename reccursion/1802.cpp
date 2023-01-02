#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n=9,index=0,maxSum=90924720;
    long long int r=n-1-index;
    long l=index;
    long long int ls=0;
    long long int rs=0;
    int res;
    long long int sum=0,hi=maxSum,lo=1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int m=mid-1;
        if(m>=r){ 
            rs=(m*(m+1)/2)-((m-r)*(m-r+1)/2);
            }
        else{   
            rs=(m*(m+1)/2)+(r-m)*1;
            }
        if(m>=l){    
            ls=(m*(m+1)/2)-((m-l)*(m-l+1)/2);
        }
        else{ 
                  ls=(m*(m+1)/2)+(l-m)*1;
                  }
        sum=mid;
        sum=sum+ls+rs;
        if(sum>maxSum){
            hi=mid-1;
        }
        else{
            res=mid;
            lo=mid+1;    
        }
    }

    cout<<res<<endl;
    
    





    return 0;
}