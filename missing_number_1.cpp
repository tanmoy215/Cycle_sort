#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,1,2,0};
    int n=sizeof(arr)/sizeof(int);
    // int i=0;
    // while(i<n){
    //     int ele = arr[i];
    //     if(ele==n || ele==i) i++;
    //     else{
    //         swap(arr[i],arr[ele]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=i){
    //         cout<<i;
    //         break;
    //     }
    // }

    //main method
    int actualsum = n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<actualsum-sum;
    }