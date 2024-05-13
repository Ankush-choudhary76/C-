#include<iostream>
using namespace std ; 

int main (){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int sumodd =0;

int sumeven =0;
for(int i=0;i<=9;i++){
    if(i%2 !=0){
        sumodd+=arr[i];
       
    }
    else{
         sumeven+=arr[i];
    }
    

}
 cout<<"sumodd"<<sumodd<<endl;
      cout<<"sumeven"<<sumeven<<endl;
int diff = sumeven - sumodd;
if(diff<0){
    diff*=-1;
}
cout<<diff;


}