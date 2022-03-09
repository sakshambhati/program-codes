#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int main()
{
    string s;
    cout<<endl;
    cin>>s; // Suppose s = "100100101"
    int n = (int) bitset<64>(s).to_ulong();
    int m = n;
    int mask;
    while(m != 0)
    {
        mask = (mask << mask) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout<< ans;
}