#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head; // pointer to head node. agr main() me declare kr dete toh head sb jgh accessible nhi rhta..

void Insert(int data, int pos)
{
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    node *temp2 = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp2 = temp2->next; //temp2 me just phle vali node ka add store ho jayega
    }
    temp->next = temp2->next; //temp2 ka next agle node ko pt. kr rha tha, ab vo ye nya node pt. krega
    temp2->next = temp;       //nye node se phle vale node me nye node'temp' ka next daal do
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
int main(void)
{
    // your code goes here
    head = NULL; //list is empty
    //cout << ("How many nos ?: \n");
    Insert(2, 1);
    Insert(3, 2);
    Insert(4, 1);
    Insert(5, 4);
    Print();
}  //Library/Developer/CommandLineTools/usr/bin