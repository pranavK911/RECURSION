#include<bits/stdc++.h>
using namespace std;
void findMaximum(int *arr,int size,int index,int &maxi){
    if(index>size){
        return;
    }
    else if(arr[index]>maxi){
        maxi=arr[index];
    }
    findMaximum(arr,size,index+1,maxi);
}
int main(){
     int arr[]={1,33,56,44,33};
     int size=5;
     int index=0;
     int maxi=INT_MIN;
     findMaximum(arr,size,index,maxi);
     cout<<"MaximumNumber is "<<maxi;
}