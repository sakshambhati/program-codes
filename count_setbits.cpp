#include<iostream>
#include<math.h>
#include<string>
#include<bitset>
using namespace std;

int ap (int m, int n)
{   
    int cnt = 0, cnt1 = 0;
    while(m)
    {
        cnt = cnt + (m & 1);
        m = m >> 1;
    }
    while(n)
    {
        cnt1 = cnt1 + (n & 1);
        n = n >> 1;
    }
    return (cnt + cnt1);
}    

int main()
{
    string s, s1;
    cout<<endl;
    cin >> s; // Suppose s = "100100101"
    int m = (int) bitset<64>(s).to_ulong();
    
    cin >> s1;
    int n = (int) bitset<64>(s1).to_ulong();

    int ans = ap(m, n);
    cout << "ans: " << ans <<endl;    
}