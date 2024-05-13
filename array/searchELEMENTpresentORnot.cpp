#include<iostream>
using namespace  std ;

int main (){
    int arr[7]={1,2,3,4,5,6,4};
     int x = 4;
     int index = 0;
     bool flag = true;
     for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag = true;
            index = i ;
            break;
               

        }
     }
     if(flag=true){
        cout<<x<<" is present in arry and index no is : "<<index<<endl;
     }else{
         cout<<x<<" is not  present in arry <<endl" ;
     }

}
