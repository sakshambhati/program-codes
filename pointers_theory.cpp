#include<iostream>
using namespace std;

void pointerFn (int *p)  //if arr was to be passed, then arr[] == *arr
{
    cout << *p << endl;  // 5 print hoga
}

int main()
{  
    int arr[10] = {2,4,5};

    /*
    int *ptr = arr;  // base add store ho gya
    cout << ptr << endl;
    ptr = ptr + 1;  // next index pe phuch gya
    cout << ptr << endl;
    cout << *ptr << endl;  // 1 index ayega
    int i = 2;

    cout << "add of arr is " << arr << endl;  // same as arr[0], &arr

    cout << "add of arr is " << i[arr] << endl;  // arr[i] == i[arr]

    cout << "pointer of arr is " << *arr + 1 << endl;  //arr me 1st location ki value me 1 add 

    cout << "exp 1 -> " << *(arr + 1) << endl; // next location ki value dereference krega

    cout << "exp 2 -> " << arr[i] * i << endl;


    //CHAR ARRAY

    char ch[6] = "abcde";

    cout << arr << endl;  // base add print hoga
    cout << ch << endl;  // pura string print hoga

    char *c = &ch[0];
    cout << c << endl;  // pura string print hoga jb tk NULL char nhi milta
    cout << *c << endl;     // phla letter print hoga

    char temp = 'z';
    char *p = &temp;

    cout << *p << endl;     // z print hoga
    cout << p << endl;    // jb tk memory me khi null char nhi mil jata tb tk print krega

    */
   int value = 5;

   int *p = &value;

   pointerFn(p);

   /* we can also pass partial array in fn_call
   fn_name(arr+3, remaining elements);
   */
}

