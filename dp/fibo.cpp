#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int arr[8]={-1,-1,-1,-1,-1,-1,-1,-1};
int fibo(int n){

        if(n==0|| n==1){
            return n;

        }
        if(arr[n]!=-1){
            return arr[n];
        }
        arr[n] = fibo(n-1) + fibo(n-2);
        return arr[n];
    
    }
int main()
{
    fastio;
    //nth fibo number
    

    

    cout<<fibo(6)<<endl;
    return 0;
}