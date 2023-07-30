#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


string formans(vector<string> words,int i){
    
    string ans;
    if(words.size()==i){
        return ans;
    }
    ans+=ans+" "+words[i];


}


void sentence(vector<vector<string>> str1){
    for(int i=0;i<str1[0].size();i++){
        string ans1=formans(str1[0],i);
        for()
    }

}


int main()
{
    fastio;
    
    return 0;
}