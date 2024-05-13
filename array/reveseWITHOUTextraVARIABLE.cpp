#include <iostream>
using namespace std;
void reverse(int arr[]);
// void reverse(int arr[])
// {
//     int i = 0;
//     int j = 6;
//     while (i < j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//         return;
//     }
// }
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << endl;
    }
    reverse(arr);
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i];
    }
}
void reverse(int arr[])
{
    int i = 0;
    int j = 6;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        return;
    }
}