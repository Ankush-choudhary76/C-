#include<iostream>
using namespace std;

int main (){
    int arr[12]={1,2,3,1,2,2,2,4,1,1,4,3};
    int highestCount = 0;
    int mostRepeated = 0;
    int shc = 0;
    int smr = 0;
    
    for(int i=0; i<=11; i++){
        int count = 1;
        for(int j=i+1; j<=11; j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }
        
        if (count > highestCount){
            shc = highestCount;
            highestCount = count;
            smr = mostRepeated;
            mostRepeated = arr[i];
        } else if (count > shc &&   arr[i]!=mostRepeated ){
            shc = count;
            smr = arr[i];
        }
    }
    
    cout << "Most repeated element: " << mostRepeated << endl;
    cout << "Repeated: " << highestCount << " times" << endl;
    
    cout << "Second most repeated element: " << smr << endl;
    cout << "Repeated: " << shc << " times" << endl;
}