#include<iostream>
#include<math.h>
#include<string>
#include<bitset>
using namespace std;

int odd(int arr[], int size)
{
    int ans = 0;
    for (int i=0; i<size; i ++)
    {  
        ans = ans ^ arr[i];
    } 
    return ans;
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
    
    n = odd(arr, size);
    cout << "ans: " << n << endl;

    // fn print
    /*
    for (int i=0; i<size; i++)
    {
        cout << arr[i];
    }
    cout << endl; */
} 