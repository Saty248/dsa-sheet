#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool isFeasible(vector<int>& piles, int k, int h) {
        if(k==0) return false;
        int timeNeeded = 0;
        for(int i=0; i < piles.size(); i++) {
            if(piles[i] <= k) {
                timeNeeded += 1;
            }
            else {
                timeNeeded = timeNeeded + (piles[i] / k) + (piles[i] % k == 0 ? 0 : 1);
            }
        }
        return timeNeeded <= h;
    }
int main()
{
    fastio;
    vector<int> piles={3,6,7,11};
    int h=8;
    int sum;
    sort(piles.begin(),piles.end());
    int lo=1;
    int hi=piles[piles.size()-1];
    int mid;
    int res;
    while(lo<=hi){
         mid=lo +(hi-lo)/2;
    
        if(isFeasible(piles, mid, h)){
            
            hi=mid-1;
        }
        else{
            lo=mid+1;
            
        }
        
    

    }
    cout<<mid<<endl;



    return 0;
}