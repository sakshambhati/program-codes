#include<iostream>
using namespace std;

int power(int n)
{
    if(n == 0)
        return 1;
                        // recursive fn -> 2^2 = 2 * 2^1;
                        //                 f(n) = n * f(n-1)
   /* int small = power(n-1);
    int big = 2 * small;  

    return big;  */

    //OR
    return 2 * power(n-1);
}

int main()
{
    int n;
    cin >> n;
    
    int ans = power(n);

    cout << ans << endl;
}