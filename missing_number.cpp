#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={6,4,1,0,2,3};
    int n=sizeof(arr)/sizeof(int);
    //using extra space
    vector<bool> b(n+1,false);
    for(int i=0;i<n;i++){
        int ele = arr[i];
        b[ele]=true;
    }
    for(int i=0;i<=n;i++){
        if(b[i]==false){
            cout<<i;
            break;
        }
    }
}