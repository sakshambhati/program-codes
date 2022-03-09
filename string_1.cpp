#include<iostream>

using namespace std;


char lowerCase(char ch)
{
    if(ch >='a' && ch<='z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;;
    }
}

bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        if(lowerCase(name[s]) != lowerCase(name[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
    
}

int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
        count++;

    return count;
}

void rev(string name[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i = " ")
        {
            int s = i;
            int e = i-1;

            while(s<=e)
            {
                swap(name[s++], name[e++]);
            }
        }
        if(i == '\0')
        {
            int s = i;
            int e = i-1;

            while(s<=e)
            {
                swap(name[s++], name[e++]);
            }
        }
    }
}
int main()
{
    cout <<"Enter name " << endl;
    char name[20];
    cin >> name;
    
    cout << getLength(name) << endl;

    int length = getLength(name);

    reverse(name, length); 

    cout << name << endl;

    bool palin = palindrome(name, length);
    cout << palin << endl;
}
    
