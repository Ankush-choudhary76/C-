#include<iostream>
using namespace std ; 

int main (){
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<=6;i++){
        brr[i]=arr[6-i];
         cout<<brr[i];
    }
    cout<<"\n";
     for(int i=0;i<=6;i++){
         cout<<brr[i];
    }
}