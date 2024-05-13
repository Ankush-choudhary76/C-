#include<iostream >
 #include<limits.h>
using namespace std ;

int main (){
// int arr[7]={1,2,3,4,5,6,7};
// int arr[7]={5,4,3,2,1,-1,-2};
int arr[7]={1,2,3,4,4,2,1};

int max= INT_MIN ;
int smax=INT_MIN ;

for(int i=0;i<=6;i++ ){
    if(max<arr[i]){
        smax=max;
       max = arr[i];

      
    }
    else if (smax<arr[i] && max!=arr[i] ){
        smax=arr[i];
        
    }
    
}
 cout<<"max : "<<max<<endl;
cout<<"samax : "<<smax;
}