#include<bits/stdc++.h>
using namespace std;
void doubbleNumber(int *arr,int size,int index){
    if(index>=size){
        return;
    }
    else{
        arr[index]=2*arr[index];
    }
    doubbleNumber(arr,size,index+1);
}
int main(){
     int arr[]={1,33,56,44,33};
     int size=5;
     int index=0;
     doubbleNumber(arr,size,index);
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
}