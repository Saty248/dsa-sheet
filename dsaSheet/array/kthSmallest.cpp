#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;



int main()
{
    fastio;
    vector<int> arr1={22, 14, 8, 17, 35, 3};
    int k=3;
    priority_queue<int> pq;
    for(auto val:arr1){
        pq.push(-val);
    }
    while(!pq.empty() && k>0){
        pq.pop();
        k--;
    }
    cout<<pq.top()*-1;
    return 0;
}