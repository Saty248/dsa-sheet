#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool cmp(pair<int,int>a, pair<int,int> b){
    return a.second < b.second;
}

int main()
{
    fastio;
    vector <int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    int n=size(start);

    vector <pair<int,int>> vp;

    for(int i=0;i<n;i++){
        vp.push_back({start[i],end[i]});
    }
    sort(vp.begin(),vp.end(),cmp);
    int c=1;
 pair<int,int> temp;
        temp=vp[0];
    for(int i=0;i<n;i++){
       if(vp[i].first>temp.second){
        c++;
        temp=vp[i];
       }

    }

    cout<<c;
    
    
    return 0;
}