#include<iostream>
using namespace std ; 

void reverse(int arr[],int n ){
int start=0;
int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start ++;
        end -- ;
        // return;     use for change one value ; 
        
    }
}

void print(int arr[],int n ){
    for(int i =0;i<=n-1;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main (){
   
    int arr[8]={1,2,3,4,5,6,7,8};
    int brr[8]={44,55,66,77,99,100,101,56};

    reverse(arr,8);
    reverse(brr,8);

     print(arr,8);
     print(brr,8);


     
}