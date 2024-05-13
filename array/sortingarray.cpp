#include<iostream>
using namespace std ; 

int main (){
    // int arr[6]={2,3,6,4,9,1};
    int arr[6]={9,1,3,10,5,6};

    for(int i=0 ; i<=5;i++){
        for (int j = i+1; j<=5; j++)
        {
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);

        }
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
    cout<<arr[i]<<endl;
    }
    
}