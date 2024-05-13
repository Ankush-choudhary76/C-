// #include<iostream>
// using namespace std ;

//   int  palin(int num){
//    int temp ;
//    int vs = num;
//    int r =0;
//     while( num>0){
//         temp=num%10;
//          r = r*10+temp;
//         num/=10;

       
//     } 
//     return vs == r;
    
// }
// int main (){
//     int arr[5]={121,231,131,445,666};  
//      for(int i =0;i<=4;i++){
//        if( palin(arr[i])){
//         cout<<arr[i]<<" paliendrom"<<endl;
//        }else{
//         cout<<arr[i]<<" not paliendrom"<<endl;
//        }
//     }

// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    int flag;
    cout << "Enter size : " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0;
    int right = n - 1;
    int centre = (left + right) / 2 + 1;

    for (int i = 0; i < centre - 1; i++)
    {
        if (a[i] == a[right - i])
        {
            flag += 1;
        }
    }
    //  cout << flag ;

    if (flag == centre)
    {
        cout << "palindrome array";
    }
    else
        cout << "Not palindrome array";
}