#include<bits/stdc++.h>
using namespace std;
 const int N=1e3+10;

vector<int> graph2[N];
bool vis[N];
  void dsf(int v){ 
    
        
    vis[v]=1;
    cout<<v<<" ";
    vector<int>::iterator it;
    for(it=graph2[v].begin(); it!=graph2[v].end();it++){
       /*  cout<<" par "<<v<<", child "<<*it<<endl; */
                 if(vis[*it]==1){
                     continue;
                 }
                 else{
                    dsf(*it);
                    }
    }
} 
 


int main(){

int n,m;
cin>>n>>m;

for(int i=0;i<m;i++){
    int v1,v2;
    cin>>v1>>v2;
    graph2[v1].push_back(v2);
    graph2[v2].push_back(v1);
      dsf(1); 
}
cout<<"vis"<<endl;
for(int i=0;i<=n;i++){
    
    cout<<vis[i]<<" ";
}
 /* for(int i=0;i<=n;i++){
    for(auto v: graph2[i]){
        cout<<v<<"  ";
    }
    cout<<endl;
}  */

    return 0;
}