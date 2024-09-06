#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,-1,1};
    int n= sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n){
        if(arr[i]<=0) i++;
        else if(arr[i]>n || arr[i]==i+1 || arr[arr[i]-1]==arr[i]) i++;
        else swap(arr[i],arr[arr[i]-1]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            break;
        }
    }
}