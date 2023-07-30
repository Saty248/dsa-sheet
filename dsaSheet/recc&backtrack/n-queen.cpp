#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void display(vector<vector<int> > &m){
    for(auto val:m){
        for(auto v:val){
            cout<<v<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(vector<vector<int> > &m,int r,int c){
    int mini1=min(r,c);
    //vectical
    for (int i = 0; i <r; i++) {
        if(m[i][c]==1){
            return false;
        }
    }
    
    //dia
for(int i=mini1;i<=mini1;i++){
    if(m[r-i][c-i]==1){
            return false;
        }
}
int y=(size(m)-c-1);
 int mini2=min(r,y);
for(int i=mini2;i<=mini1;i++){
    if(m[r-1][c+1]==1){
            return false;
        }
}
return true;
}
void queen( vector<vector<int> > &m,int q,int r){
    if(r==size(m)){
        display(m);
        cout<<endl;
    }
    for(int c=0;c<size(m[0]);c++){
       if(isSafe(m,r,c)==true){
         m[r][c]=1;
        queen(m,q-1,r+1);
        m[r][c]=0;
        }
    }
   /*  queen(m,q,r+1); */



}


int main()
{
    fastio;
    vector<vector<int> > m= {{0, 0, 0, 0},
         {0, 0, 0, 0}, 
         {0, 0, 0, 0},
         {0, 0, 0, 0}};
         int n = m[0].size();
    queen(m,4,0);
         display(m);
    
    return 0;
}