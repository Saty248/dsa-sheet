 #include<bits/stdc++.h>
using namespace std;

int par[14];
void indepth(vector<int> g[],int n,  int parent)
{
    
    
    for(int i=0;i<g[n].size();i++){
        if(g[n][i]!=parent){
            par[g[n][i]]=n;
            indepth(g,g[n][i],n);
        }
    }
}
void unc(vector<int> g[],int v){

    
   
    indepth(g,v,v);

}

vector<int> v1(int a){
    vector<int> ans;
    if(par[a]==0){
         ans.push_back(par[a]);
        
         return ans;
             }

    vector<int> ansbel=v1(par[a]);
    for(auto val:ansbel){
        ans.push_back(val);
    }
    ans.push_back(par[a]);
    return ans;
}

int main(){

int n ,m;
cin >>n >>m;
vector <int> g1[n];

for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;
g1[a].push_back(b);
g1[b].push_back(a);
}



unc(g1,0);
 
    /* for(auto val:par){
        cout<<val<<"  "<<endl;
    } */
vector<int> p1=v1(8);
vector<int> p2=v1(9);

 
 for(auto val:p1){
        cout<<val<<"  "<<endl;
    }
    cout<<endl;
    for(auto val:p2){
        cout<<val<<"  "<<endl;
    }
    int i=0;
    cout<<endl;
    while(p1[i]==p2[i] && i<p1.size()){
        
        i++;
    }
    
    cout<<p1[i-1]<<" ";

    return 0;
}
