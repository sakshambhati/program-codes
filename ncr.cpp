#include<iostream>
#include<math.h>
using namespace std;

int fact (int n)
{
    int fact = 1;
    for (int i = 1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr (int n, int r)
{
    int ans = (fact(n)) / (fact(r) * fact (n-r));
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ans = ncr(n, r);
    cout<< "ans: " << ans<<endl;
    
}