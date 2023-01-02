 #include<bits/stdc++.h>
using namespace std;

int d1[14];
int d2[14];
void indepth(vector<int> g[],int n,  int parent)
{
    
    cout<<n << " ";
    for(int i=0;i<g[n].size();i++){
        if(g[n][i]!=parent){
            d1[g[n][i]]=d1[n]+1;
            indepth(g,g[n][i],n);
        }
    }
}
void unc(vector<int> g[],int v){

    
    /* for(int i=0; i < v;i++){
        
        
            indepth(g,i,i);

        


    } */
    indepth(g,v,v);

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
cout<<endl;
int max=0,c=0;
for(int i=0;i<14;i++){
     if(max<d1[i]){
        max=d1[i];
        c=i;
    } 
    
}
cout<<"max1 "<<c<<endl;

for(int i=0;i<14;i++){
    d1[i]=0;
}

unc(g1,10);
int max2=0,c2=0;
for(int i=0;i<14;i++){
     if(max2<d1[i]){
        max2=d1[i];
        c2=i;
    } 
    
}
cout<<"max2 "<<c2<<endl; 
    return 0;
}

