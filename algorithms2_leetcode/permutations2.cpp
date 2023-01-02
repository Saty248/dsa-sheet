#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> per(vector<int> p,vector<int> up){
    vector<int> curr;
    if(up.empty()){
        curr.insert(curr.end(),p.begin(),p.end());
        return curr;
    }
    int c=up[up.size()-1];
    up.pop_back();

    for(int i=1;i<=p.size()+1;i++){
        vector<int> temp=p;
        
        temp.insert(temp.begin()+(i-1),c);
        vector<int> ansbel=per(temp,up);
        curr.insert(curr.end(),ansbel.begin(),ansbel.end());
    }

    return curr;

}

int main()
{
    fastio;
     vector<int> curans=per({},{1,2,3});
     int i=0;
     for(auto val:curans){
       i++;
            cout<<val<<" ";
        if(i%3==0){
           cout<<endl;  
        }
       
     }
    return 0;
}