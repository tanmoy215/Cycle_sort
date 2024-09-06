#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,4,4,1};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n){
        int ele = arr[i];
        if(arr[ele]==arr[i]){
            cout<<arr[i];
            break;
        }
        else swap(arr[i],arr[ele]);
    }
   }
