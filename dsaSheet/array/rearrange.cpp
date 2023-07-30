#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void rightShift(int arr[],int s,int e){
    int a=arr[e];
    for(int i=e;i>s;i--){
        arr[i]=arr[i-1];

    }
    arr[s]=a;
}




int main()
{
    fastio;
    int arr[]={1, 2, 3, -4, -1, 4};
    return 0;
}