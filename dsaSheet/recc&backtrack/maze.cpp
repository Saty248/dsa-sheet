#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

    
    
    vector<string> helper(vector<vector<int>> &m, int n,int i,int j,string unp,string dir){
        if(i==n-1 && j==n-1){
           
            vector<string> s;
            s.push_back(unp+dir);
             cout<<s[0]<<endl;
            return s;
        }
        if(i<0 || j<0 || i>=n || j>=n){
            return {"-1"};
        }
        else if(m[i][j]==0){
            return {"-1"};
        }
        else{
            unp=unp+dir;
            m[i][j]=0;
           
            vector<string> left=helper(m,n,i,j-1,unp,"L");
            vector<string> right=helper(m,n,i,j+1,unp,"R");
            vector<string> up=helper(m,n,i-1,j,unp,"U");
            vector<string> down=helper(m,n,i+1,j,unp,"D");
            m[i][j]=1;
            vector<string> ansall;
           if(left[0]!="-1")
                ansall.insert(ansall.begin(),left.begin(),left.end());
            
           
                ansall.insert(ansall.begin(),right.begin(),right.end());
            
           
                ansall.insert(ansall.begin(),up.begin(),up.end());
            
            
                ansall.insert(ansall.begin(),up.begin(),up.end());
                cout<<size(ansall)<<endl;
            
            return ansall;


        }


    }

    void helper2(vector<vector<int>> &m, int n,int i,int j,string unp,string dir,vector<string> &res){
        if(i==n-1 && j==n-1){
           
          
            
            res.push_back(unp+dir);
            return;
        }
        else if(i<0 || j<0 || i>=n || j>=n){
            return;
        }
        else if(m[i][j]==0){
            return;
        }
        else {
            unp=unp+dir;
           
            m[i][j]=0;
            helper2(m,n,i,j-1,unp,"L",res);
            helper2(m,n,i,j+1,unp,"R",res);
            helper2(m,n,i-1,j,unp,"U",res);
            helper2(m,n,i+1,j,unp,"D",res);
            m[i][j]=1;
            


        }


    }
    
   

int main()
{
    fastio;

   
   vector<vector<int> > m= {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 0, 1}};
    
    int n = m[0].size();
     vector<string> res;
      helper2(m,n,0,0,"","",res);  

    /*  vector<string> res=helper(m,n,0,0,"","");  */
    if(res.size()==0){
        cout<<-1;
    }
     for (int i = 0; i < res.size(); ++i)
        cout << res[i] << ' ';  
    return 0;
}
    