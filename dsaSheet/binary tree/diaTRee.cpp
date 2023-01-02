#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void depth(vector<int> g[],int n,int par,int ht[]){
 cout<<n<<" ";
for(int i=0;i<g[n].size();i++){
    if(g[n][i]!=par){
        ht[g[n][i]]=ht[n]++;
        depth(g,g[n][i],n,ht);
    }
}
}

int main()
{
    fastio;
     int n ,m;
    cin>>n>>m;
    vector<int> gp1[n];
    vector<int> vis(n,0);
    int ht[n];
    ht[0]=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        gp1[a].push_back(b);
        gp1[b].push_back(a);
    }
    
depth(gp1,0,0,ht);
int max=0,c=0;
 for(int i=0;i<n;i++){
     if(max<ht[i]){
        max=ht[i];
        c=i;
    } 
    
}
cout<<"max1 "<<max<<endl; 
    return 0;
}