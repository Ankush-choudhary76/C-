// #include<iostream>
// using namespace std ;

// int main (){
//     int arr[5]={1,2,3,4,5};
//      arr[4]=22;
//     cout<<arr[4];
// }


#include<iostream>
using namespace std ;

int main (){
    // int arr[5]={1,2,3,4,5};
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    
     arr[4]=22;
     for (int i = 0; i <=4; i++)
     {
         cout<<arr[i]<<endl;

     }
     
}