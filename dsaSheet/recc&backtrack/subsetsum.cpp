#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int mindif=INT_MAX;

int sum(vector<int> n){
    int sum=0;
    for(auto val:n){
        sum=+val;
    }
    return sum;
}
void display(vector<int> a,vector<int> b){
    for(auto val:a){
        cout<<val<<" ";
    }
    cout<<endl;
     for(auto val:b){
        cout<<val<<" ";
    }
cout<<endl;
cout<<endl;
cout<<endl;
}

int tug(vector<int> n,vector<int> a,vector<int> b,int i){
    /* if(i==size(n)-1){
         a.push_back(n[i]);
        int ans1=tug(n,a,b,i+1);
         a.pop_back();

         b.push_back(n[i]);
        int ans2=tug(n,a,b,i+1);
         b.pop_back();


        return min(ans1,ans2);
    } */



    if(i==size(n)){
       
        display(a,b);

        if(abs(sum(a)-sum(b))<mindif){
            mindif=abs(sum(a)-sum(b));
        }
        return abs(sum(a)-sum(b));
    }
    
int ans1=sum(a),ans2=sum(b);

    if(size(a)<=((size(n)/2))){
    a.push_back(n[i]);
     //b.push_back(n[i+1]);
     ans1=tug(n,a,b,i+1);
    a.pop_back();
     //b.pop_back();
     }

    // a.push_back(n[i+1]);
    if(size(b)<=((size(n)/2))){
     b.push_back(n[i]);
   
     ans2=tug(n,a,b,i+1);
   //a.pop_back();
     b.pop_back();
    }
    return min(ans1,ans2);


}


int main()
{
    fastio;
    vector<int> n={3, 4, 5, -3, 100, 1, 89, 54, 23, 20};
    tug(n,{},{},0);
    cout<<mindif;
    return 0;
}