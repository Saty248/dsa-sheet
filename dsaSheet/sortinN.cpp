#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> arr1={2,2,1,0,0,1,2};
    int a=0,b=0,c=0;
    for(auto val:arr1){

        if(val==0){
            a++;
        }
        if(val==1){
            b++;
        }
        if(val==2){
            c++;
        }



    }
int i=0;
    while(a--){
        arr1[i]=0;
        i++;
    }
    while(b--){
        arr1[i]=1;
        i++;
    }
    while(c--){
        arr1[i]=2;
        i++;
    }

    for(auto val:arr1){
        cout<<val<<" ";
    }


    return 0;
}