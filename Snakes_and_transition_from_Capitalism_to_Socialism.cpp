#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int inf=1e8+10;
int g[N][N];
        int vis[N][N];
        int level[N][N];
        vector<pair<int,int>> movement={
            {-1,0},{0,-1},{1,0},{0,1},{1,1},{-1,1},{-1,-1},{1,-1}
        };
        int n,m;
        void reset1(){
             for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            
            vis[i][j]=0;
            level[i][j]=inf;
            }
             }  
        }
        bool valid1(int x,int y){
            if(x>=0 && x<n && y>=0 && y<m){
                return true;
            }else{
                return false;
            } 
        }
int bfs(){
    int max1=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                max1=max(max1,g[i][j]);

            }
        }
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(max1==g[i][j]){
                    q.push({i,j});
                    level[i][j]=0;
                    vis[i][j]=1;
                }

            }
        }
       
        int ans=0;
        while(!q.empty()){
            auto fr=q.front();
            q.pop();
            int g_x=fr.first;
            int g_y=fr.second;
            for(auto val:movement){
                
                int childx=val.first + g_x;
                int childy=val.second + g_y;
                if(valid1(childx,childy)==false) continue; 
                if(vis[childx][childy]==1) continue; 
                
                q.push({childx,childy});
                level[childx][childy]=level[g_x][g_y] + 1;
                    vis[childx][childy]=1;
                ans=max(ans,level[childx][childy]);

            }
        }
        return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        reset1();
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>g[i][j];

            }
        }
        int time;
        
        time=bfs();
        cout<<time<<endl;

    }

    return 0;
}