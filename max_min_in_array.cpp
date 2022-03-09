#include<iostream>
#include<math.h>
#include<string>
#include<bitset>
using namespace std;

int maxi(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int mini(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[10], size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = maxi(arr, size);
    int min = mini(arr, size);
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;

}