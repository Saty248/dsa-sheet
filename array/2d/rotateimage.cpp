#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

 int rotate(vector<vector<int> > matrix){
    int l=0,r=matrix[0].size()-1;
    int t=l,b=r;

    while(l<r){
        for(int i=0;i<r-l;i++){
            int t=l,b=r;
            int temp=matrix[t][l+i];
            matrix[t][l+i]=matrix[b-i][l];
            matrix[b-i][l]=matrix[b][r-i];
            matrix[b][r-i]=matrix[t+i][r];
            matrix[t+i][r]=temp;
        }
        l++;
        r--;
    }

}

int main()
{
    fastio;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    return 0;
}