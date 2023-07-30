#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool directions(vector<vector<char>>grid,string word,int x1,int y1,int i,int j){
    for(auto val:word){
       // cout<<val<<" "<<grid[x1][y1]<<x1<<" "<<y1<<endl;
        if((x1>=0 && x1<grid.size()) && (y1>=0 && y1<grid[0].size()) && val==grid[x1][y1]){
             cout<<"here2"<<" ";
            x1=x1+i;
            y1=y1+j;
            continue;
        }else{
            return false;
        }
    }
    return true;
}

void searchWord(vector<vector<char>>grid, string word){

	    // Code here
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            cout<<"here"<<" ";
            bool up,down,left,right,upleft,upright,downleft,downright;
             up=directions(grid,word,i,j,-1,0);
            down=directions(grid,word,i,j,+1,0);
            left=directions(grid,word,i,j,0,-1); 
            right=directions(grid,word,i,j,0,1);
             upleft=directions(grid,word,i,j,-1,-1);
            upright=directions(grid,word,i,j,-1,1);
            downleft=directions(grid,word,i,j,1,-1);
            downright=directions(grid,word,i,j,1,1); 
            if(up)
                cout<<i<<" "<<j<<endl;
                if(down==true)
                cout<<i<<" "<<j<<endl;
                if(left==true)
                cout<<i<<" "<<j<<endl;
                if(right)
                cout<<i<<" "<<j<<endl;
                if(upleft==true)
                cout<<i<<" "<<j<<endl;
                if(upright==true)
                cout<<i<<" "<<j<<endl;
                if(downleft==true)
                cout<<i<<" "<<j<<endl;
                if(downright==true)
                cout<<i<<" "<<j<<endl;
        }
    }


	}

int main()
{
    fastio;

    vector<vector<char>>grid={{'a','b','c'},{'d','r','f'},{'g','h','i'}};
    string s="abc";
   // cout<<directions(grid,s,0,0,0,1);
    searchWord(grid,s);
    // code goes here
    return 0;
}