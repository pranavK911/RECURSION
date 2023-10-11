#include<bits/stdc++.h>
using namespace std;
bool serchTarget(int * arr,int size,int target,int index){
    if(index>=size){
        return false;
    }
    else if(arr[index]==target){
        return true;
    }
    serchTarget(arr,size,target,index+1);
}
int main(){
    int arr[]={1,33,56,44,33};
    int size=5;
    int index=0;
    //int target=33;
    int target=10;
    bool ans=serchTarget(arr,size,target,index);
    if(ans)cout<<"Found";
    else cout<<"Not found";
}