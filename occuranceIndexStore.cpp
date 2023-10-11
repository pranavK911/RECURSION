#include<bits/stdc++.h>
using namespace std;
void occuranceIndexStore(int *arr,int size ,int index,int target,vector<int> &vect){
    if(index>=size){
        return;
    }
    else if(arr[index]==target){
        vect.push_back(index);
    }
    occuranceIndexStore(arr,size,index+1,target,vect);
}
int main(){
    int arr[]={1,33,56,44,33,59,33};
    int size=7;
    int index=0;
    int target=33;
    vector<int>vect;
occuranceIndexStore(arr,size,index,target,vect);
for(int i=0;i<vect.size();i++){
    cout<<vect[i]<<" ";
}
}