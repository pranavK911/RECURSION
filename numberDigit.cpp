#include<bits/stdc++.h>
using namespace std;
void numberDigit(int num){
    if(num==0){
        return;
    }
    int digit=num%10;
     numberDigit(num/10);
    cout<<digit<<" ";
   
}
int main(){
    int number=8765;
    numberDigit(number);
}