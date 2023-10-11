#include<bits/stdc++.h>
using namespace std;
void occuranceIndex(int *arr,int size,int index,int target){
    if(index>=size){
        return;
    }
    else if(arr[index]==target){
        cout<<index<<" ";
    }
    occuranceIndex(arr,size,index+1,target);
}
int main(){
     int arr[]={1,33,56,44,33,59,33};
     int size=7;
     int index=0;
     int target=33;
     occuranceIndex(arr,size,index,target);
}