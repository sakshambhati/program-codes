#include<iostream>
using namespace std;

int sorted(int *arr, int size)
{
    //base condn
    if(size == 0 || size == 1)
        return true;
    if(arr[0] > arr[1])  // 1 case ke liye check krlo
        return 0;
    else
    {
        bool rem_part = sorted(arr+1, size-1);  //partial array be pass kr skte h
            return rem_part;
    }
}

int main()
{
    int n;
    int arr[5] ={2,4,6,8,7};
    
    cout << endl;
    bool ans = sorted(arr, 5);

    cout << ans << endl;
}