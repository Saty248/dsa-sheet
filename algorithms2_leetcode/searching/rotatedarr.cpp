#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int pivot(vector<int> nums){
     int s,e,m,k=0;
    s=0;
    e=nums.size()-1;
    while(s<=e){
        m=s+ (e-s)/2;
        if(m<e & nums[m]>nums[m+1]){
            return m;
        }
        if(m>s & nums[m]<nums[m-1]){
            return m-1;
        }
        if(nums[s]<nums[m]){
            s=m+1;
            continue;
        }
        if(nums[s]>nums[m]){
            e=m-1;
            continue;
        }
        

    }
    return -1;

}

int main()
{
    fastio;
    vector<int> nums={5,1,3};
    int ans;
     int s,e,m,target=1,k=0;
    
    int pivot1=pivot(nums);
    cout<<"pivot="<<pivot1<<endl;
     
    s=0;
    e=pivot1;
    while(s<=e){
         m=s+(e-s)/2;
        if(target==nums[m]){
            k=1;
            ans=m;
            cout<<ans<<endl;
            break;
        }
        if(target<nums[m]){
            e=m-1;
            continue;
        }
        if(target>nums[m]){
            s=m+1;
            continue;
        }

    }

    if(k==0){
        s=pivot1+1;
    e=nums.size()-1;
    while(s<=e){
         m=s+(e-s)/2;
        if(target==nums[m]){
            k=1;
            ans=m;
            cout<<ans<<endl;
            break;
        }
        if(target<nums[m]){
            e=m-1;
            continue;
        }
        if(target>nums[m]){
            s=m+1;
            continue;
        }

    }



    }
    if(k==0){
        cout<<-1;
    }



    return 0;
}