#include<iostream>
#include<vector>
using namespace std;

class node
{
   public:
   int data;
   node* next;

   //constructor
   node(int data)
   {
       this ->data = data;
       this ->next = NULL;
   }

};

void insertNode(node* &tail, int element, int d)
{
    //assuming element is present and we r inserting after element

    if(tail == NULL)
    {
        node* n = new node(d);
        tail = n;
        n -> next = n;    // circular
    }
    else
    {
        node* curr = tail;

        while(curr -> data != element)
            {
                curr = curr -> next;
            }
        //bahr aye mtlb curr element ke upr h

        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void print(node* &tail)
{
    node* temp = tail;

    cout << tail -> data <<" ";    // for single element
    while(temp -> next != tail)     // for more than one element
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    node* tail = NULL;

    int element = 0;
    insertNode(tail, element, 3);
    print(tail);

    return 0;
}
