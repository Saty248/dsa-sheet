#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> num={-12, 11, -13, -5, 6, -7, 5, -3, -6};

    int l=0;
    int r=size(num)-1;
    while(l<r){
        if(num[l]<0 && num[r]<0){
            l++;
            continue;
        }
        if(num[l]<0 && num[r]>0){
            r--;
            l++;
            continue;
        }
        if(num[l]>0 && num[r]<0){
            swap(num[l],num[r]);
            continue;
        }
        if(num[l]>0 && num[r]>0){
            r--;
            continue;
        }

    }

    for(auto val:num){
        cout<<val<<" ";
    }
    return 0;
}