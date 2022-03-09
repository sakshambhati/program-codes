#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head;
int x;
void Insert(int data)
{
    
}
void Print()
{
    node *temp = head; //head contains node address
    cout << "list is ";
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << ("\n");
}
void Delete(int n); {
    node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        delete temp1;
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next; // temp1 me del. ke phle vala store h
    }
    node *temp2 = temp1->next; //temp1->next del.(n) vale node ko pt. kr rha h
    temp1->next = temp2->next; // (n+1) node, temp2 vale ke pas next vale ka add. hoga
    delete temp2;              //temp2 stores add. of nth value
}
int main()
{
    head = NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Print();
    cout << "Enter pos to be deleted ";
    int n;
    cin >> n;
    Delete(n);
    Print();
}