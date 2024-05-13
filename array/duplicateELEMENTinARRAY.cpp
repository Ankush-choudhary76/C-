#include<iostream>
using namespace std ;

int main (){
    
    int arr[7]={1,2,3,4,5,3,4};
    for (int i = 0; i <=6; i++)
    {
        for (int j =i+1; j <=6; j++)
        {
            if(arr[i]==arr[j]){

                cout<<arr[j]<<" element are duplicate in array  index is  :"<<i<<","<<j<<endl;
            }
        }
        
    }
    
}




