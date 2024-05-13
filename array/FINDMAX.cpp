#include<iostream>
using namespace std ;

int main (){
    int arr[5]={22,33,54,1,87};
    // int max = arr[0];
    int max = INT16_MIN ;
    for(int i =0 ; i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout<<max;
}