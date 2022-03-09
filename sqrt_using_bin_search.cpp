#include<iostream>
using namespace std;


int bin_searchInt(int key)
{
    int s = 0, e = key;
    int ans;
    int mid = (s + (e-s)/2);
    
    while(s<=e)
    {
        int sqr = mid * mid;
        if(sqr == key)   // big integer * big integer
        {
            return mid;
        }
        else if (sqr > key)
        {
            e = mid - 1;
            
        }
        else
        {
            ans = mid;  //floor value
            s = mid + 1;
        }
        mid = (s + (e-s)/2);
    }
    return ans;
}

double moreprecision(int N, int n, int temp)
{
    double ans = temp;
    double factor = 1;
    for(int i = 0; i < n; i++)
    {
        factor = factor/10;

        for(double j = ans; j*j < N; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int N;
    cout << "Enter sqrt to be found: " << endl;
    cin >> N;
    //cout << "Enter array: " << endl;

    int temp = bin_searchInt(N);

    cout << "ans: " << moreprecision(N, 3, temp) << endl;
    
} 
