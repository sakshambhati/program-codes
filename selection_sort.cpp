#include<iostream>
using namespace std;

int main()
{
    int arr[5], n;
    cin >> n;
    cout << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i<n-1; i++)
    {
        int min = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[min])  // min pe dhyan dena
            {
                min = j; //store value otherwise it will change
            }
        }
        swap(arr[min], arr[i]);
    }  
    for(int i = 0; i<n; i++)
    {
    cout << arr[i] <<endl;
    }
} 
