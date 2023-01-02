#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"






using namespace std;


    int main(){
    fastio;
    int n ,m;
    cin>>n>>m;
    vector<int> gp1[n];
    vector<int> vis1(n,0);
    vector<> level1[n];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        gp1[a].push_back(b);
        gp1[b].push_back(a);
    }





    return 0;
}