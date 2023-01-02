#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isSafe(vector<vector<bool>> board,int r,int c){
    //up
    for(int i=r;i>=0;i--){
        if(board[i][c]==false){
            return false;
        }
    }
    //left diagonal
    int left=min(r,c);
    for(int i=1;i<=left;i++){
        if(board[r-i][c-i]==false){
            return false;
        }
    }
    //right diagonal
    int diff=board.size()-c-1;
     int right=min(r,diff);
    for(int i=1;i<=right;i++){
        if(board[r-i][c+i]==false){
            return false;
        }
    }

    return true;

}
void display(vector<vector<bool>> board){
for(auto val:board){
    for(auto v:val){
        if(v==false){
            cout<<"Q"<<" ";
        }
        else{
            cout<<"_"<<" ";
        }
    }
    cout<<endl;
}
cout<<endl;
}

int queeen(vector<vector<bool>> board,int row){
if(row==board.size()){
    display(board);
    return 1;
}
int count =0;
for(int i=0;i<board[0].size();i++){
if(isSafe(board,row,i)==true){
    board[row][i]=false;
    count+=queeen(board,row+1);
    board[row][i]=true;

}

}
return count;

}






int main()
{
    fastio;
    vector<vector<bool>> board={{true,true,true,true},
                                {true,true,true,true},
                                {true,true,true,true},
                                {true,true,true,true}};
    cout<<queeen(board,0)<<endl;

    return 0;
}