#include<bits/stdc++.h>
using namespace std;
void findEven(int *arr,int size,int index,vector<int>&vect){
    if(index>=size){
        return;
    }
    else if(arr[index]%2==0){
       vect.push_back(arr[index]);
    }
    findEven(arr,size,index+1,vect);
}
int main(){
     int arr[]={10,33,56,44,33};
     int size=5;
     int index=0;
     vector<int>vect;
     findEven(arr,size,index,vect);
     for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
     }
}