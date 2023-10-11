#include<bits/stdc++.h>
using namespace std;
void printArray(int *arr,int size,int index){
    //base case
    if(index>=size){
        return;
    }
    else{
        cout<<arr[index]<<" ";
    }
    printArray(arr,size,index+1);
}
int main(){
    int arr[]={1,33,56,44,33};
    int size=5;
    int index=0;
    printArray(arr,size,index);
}