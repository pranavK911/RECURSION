#include<bits/stdc++.h>
using namespace std;
int targetIndex(int * arr,int size,int index,int target){
    if(index>=size){
        return -1;
    }
    else if(arr[index]==target){
        return index;
    }
    targetIndex(arr,size,index+1,target);
    
}
int main(){
     int arr[]={1,33,56,44,33};
     int size=5;
     int index=0;
     int target=56;
     int answ=targetIndex(arr,size,index,target);
     if(answ) cout<<"Target found at "<<answ;
     else cout<<"Target Not found 404";
}