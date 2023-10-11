#include<bits/stdc++.h>
using namespace std;
void minimumNumber(int *arr,int size,int index,int &mini){
    if(index>=size){
        return;
    }
    else if(arr[index]<mini){
        mini=arr[index];
    }
    minimumNumber(arr,size,index+1,mini);
}
int main(){
     int arr[]={1,33,56,44,33};
     int size=5;
    int index=0;
    int mini=INT_MAX;
    minimumNumber(arr,size,index,mini);
    cout<<" Minimum number is "<<mini;
}