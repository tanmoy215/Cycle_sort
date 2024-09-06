#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,3,2,1,4,1,2};
    int n= sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n){
        int ele = arr[i]-1;
        if(arr[ele]==i || arr[ele]==arr[i]) i++;
        else swap(arr[i],arr[ele]);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            //cout<<i+1;
           ans.push_back(i+1);
        }
    }
    int l = ans.size();
    for(int i=0;i<l;i++){
        cout<<ans[i]<<" ";
    }
}