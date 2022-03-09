#include<iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "size of arr is " << size << endl;

    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;
}

int sumArr(int *arr, int size, int key)
{
    print(arr, size);
    //base case
    if(size == 0)  // array khali, element nhi mila
        return 0;
    
    if(arr[0] == key)
        return 1;
    else
    {
        bool ans = sumArr(arr+1, size-1, 8);
            return ans;
    }
    return 0;
}

int main()
{
    int n;
    int arr[5] ={2,4,6,8,7};
    
    cout << endl;
    bool ans = sumArr(arr, 5, 8);

    cout << ans << endl;
}s