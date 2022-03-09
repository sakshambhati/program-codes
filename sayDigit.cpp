#include<iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    if(n == 0)
        return;
    
    int digit = n % 10;
    n = n/10;


    sayDigit(n, arr);  // hr baar fn call pe nya digit space bnega memory me
    // jb base condn hit hogi toh ulta return krna start krega

    cout << arr[digit] << " ";
    
}

int main()
{
    int n;
    string arr[10] ={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cin >> n;
    cout << endl;
    sayDigit(n, arr);

    cout << endl;
}