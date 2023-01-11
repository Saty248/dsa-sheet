#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    vector<int> ans(2,-1);
    int a[]={1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n=sizeof(a)/sizeof(a[0]);
    int e=n-1;
    int s=0;
    int x=5;
    while(e>=s){
        int mid=s+(e-s)/2;
        if(x>a[mid]){
            s=mid+1;


        }
        else if(x<a[mid]){
            e=mid-1;
        }
        else{
            ans[0]=mid;
            e=mid-1;
        }

    }

    s=0;
    e=n-1;
     while(e>=s){
        int mid=s+(e-s)/2;
        if(x>a[mid]){
            s=mid+1;


        }
        else if(x<a[mid]){
            e=mid-1;
        }
        else{
            ans[1]=mid;
            s=mid+1;
        }

    }

    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}