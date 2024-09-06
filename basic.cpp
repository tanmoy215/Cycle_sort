#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {3,2,1,0,4,5};
  int n = sizeof(arr)/sizeof(int);
  int i = 0;
  while(i<n){
    int m = arr[i];
    if(m==i+1) i++;
    else swap(arr[i],arr[m-1]);
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}