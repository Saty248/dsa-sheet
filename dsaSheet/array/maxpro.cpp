#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;



int main()
{
    fastio;
    vector<int> arr={6, -3, -10, 0, 2};
    
int k1=arr[0],k2=arr[0]; 
     int max1=arr[0];

     for(int i=1;i<n;i++){
         if(arr[i]<0){
             swap(k1,k2);
         }
        k1=max(arr[i],k1*arr[i]);
        k2=min(arr[i],k2*arr[i]);
        max1=max(max1,k1);
        
	}
	return max1;
	}


     }
     cout<<max1;
    return 0;
}