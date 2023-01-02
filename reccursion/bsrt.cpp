#include <bits/stdc++.h>
using namespace std;

void bubble(int a[],int r,int c){
    if(r==0 ){
        return;
    }
    
    if(r>c){
        if(a[c]>a[c+1]){
            swap(a[c], a[c+1]);
            
        }
        bubble(a,r,c+1);
    }
    else{
        bubble(a,r-1,0);
    }

}
void printArray(int a[], int n)
{
    for (int i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){

   int a[5]={1,9,8,4,5};
   int n = sizeof(a)/sizeof(a[0]);
    bubble(a,4,0);
    
    printArray(a, n);
    return 0;
}