#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

//count the no of paths
int count(int a,int b){
    if(a==1 || b==1){
        return 1;
    }
    int left=count(a-1,b);
    int right=count(a,b-1);
    return left + right;

}
void count(string p,int a,int b){
    if(a==1 && b==1){
        cout<<p<<endl;
        return;
    }
    if(a==1 && b!=1){
        int c=b-1;
        while(c--){
            p=p+"D";
            
        
        }
        cout<<p<<endl;
            return;
    }
    if(a!=1 && b==1){
        int c=a-1;
        while(c--){
            p=p+"R";
            
        }
        cout<<p<<endl;
            return;
    }
    count(p+"R",a-1,b);
    count(p+"D",a,b-1);
    return;

}

vector<string> path(string p,int a,int b){
vector<string> ans;
vector<string> ansleft;
vector<string> ansright;
if(a==1 && b==1){
        ans.push_back(p);
        return ans;
    }
    if(a==1 && b!=1){
        int c=b-1;
        while(c--){
            p=p+"V";
            
        
        }
        ans.push_back(p);
        return ans;
    }
    if(a!=1 && b==1){
        int c=a-1;
        while(c--){
            p=p+"H";
            
        }
        ans.push_back(p);
        return ans;
    }
    ansleft=path(p+"H",a-1,b);
    ansright=path(p+"V",a,b-1);
    vector<string>ansdio=path(p+"D",a-1,b-1);
    ans.insert(ans.end(),ansleft.begin(),ansleft.end());
    ans.insert(ans.end(),ansright.begin(),ansright.end());
    ans.insert(ans.end(),ansdio.begin(),ansdio.end());
    return ans;

}

void backtracking(string p,int a,int b,vector<vector<bool>> &maze){
    if(a==maze.size()-1 && b==maze.size()-1){
        cout<<p<<endl;
        return;
    }
    if(maze[a][b]==false){
        return;
    }
    maze[a][b]=false;

    if(b<maze[0].size()-1){
    backtracking(p+"R",a,b+1,maze);
    }
    if(a<maze.size()-1){
    backtracking(p+"D",a+1,b,maze);
    }
    if(b>0){
    backtracking(p+"L",a,b-1,maze);
    }
     if(a>0){
        backtracking(p+"U",a-1,b,maze);
    }

     maze[a][b]=true;
    return;

}

int main()
{
    fastio;
    /* vector<string> ans;
    ans=path("",3,3); */
    vector<vector<bool>> maze={{true,true,true},
                                {true,true,true},
                                {true,true,true}};
    backtracking("",0,0,maze);
    /* for(auto val:ans){
        cout<<val<<" ";
    } */
    return 0;
}