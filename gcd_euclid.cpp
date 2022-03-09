#include<iostream>
using namespace std;

int hcf(int a, int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;

    while(a != b)
    {
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ans =  hcf(n,m);
    cout << "gcd: " << ans << endl;
}