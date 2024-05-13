#include<iostream>
using namespace std ; 

int main (){
    int arr[12]={1,2,3,1,2,2,2,4,1,1,4,3};
    int highcount = 0;
    int mostrepeated=0;
    for(int i=0;i<=11;i++){
        int count =1 ;
        for(int j =i+1;j<=11;j++){
            if (arr[i]==arr[j]  ){
               count++;
             if (count > highcount){
                highcount=count;
                mostrepeated =arr[i];
               
                }
             } 

        }
    }
cout<<" mostrepeated element  : "<<mostrepeated<<endl;
cout<<" repeat : "<<highcount<<" Times ";

}