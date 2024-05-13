#include<iostream>
using namespace std ;
void reverse(int arr[],int a,int b){
// for(int i=a, j=b;i<j;i++,j--){
//     swap(arr[i],arr[j]);
   // } 
                int start=a;
    int end=b;
    while(start<end){
         swap(arr[start],arr[end]);
         start ++;
         end --;
}
}
int main (){
    int arr[7]={1,2,3,4,5,6,7};

    reverse(arr,0,6);
     reverse(arr,0,2);
      reverse(arr,3,6);

    for(int i =0 ; i<=6;i++){
        cout<<arr[i]<<",";
    }
}