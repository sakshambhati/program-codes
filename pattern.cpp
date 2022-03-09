#include <iostream>
using namespace std;
 
// Function to print hollow rectangle
void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {   
            int k = i+j-1;
            if (k>4)
                cout<<k-4;
            else
                cout<<k;
            
        }
        cout << endl;
    }
 
}
 
// Driver Code
int main()
{
    int rows = 4, columns = 4;
    print_rectangle(rows, columns);
    return 0;
}