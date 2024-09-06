#include<iostream>
using namespace std;
int main(){
   int arr[]={4,2,1,6,5,3,7,9,8};
   int n=sizeof(arr)/sizeof(int);
   int i=0;
   //cycle sort
   while(i<n){
    int nm = arr[i];
  if(nm==i+1) i++;
  else{
    swap(arr[i],arr[nm-1]);
  }
   }
   //final Output
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}