#include<iostream>
#include<math.h>
#include<string>
#include<bitset>
using namespace std;

void inverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {  
        swap(arr[start], arr[end]);
        start ++;
        end --;
    } 
} 

int main()
{
    int arr[10], size, n;
    cin >> size;
    cout << "Enter " << size << " elements: " << endl;
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    
    inverse(arr, size);

    for (int i=0; i<size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}