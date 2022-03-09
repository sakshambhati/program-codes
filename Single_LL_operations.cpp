#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
    int data;
    node *next;


    //constructor
    node(int data)
    {
        this ->data = data;
        this ->next = NULL;
    }

    //destructor
    ~node()
    {
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
    }
};

void insertAtHead(node* &head, int d)
{
    //create new node
    node *temp = new node(d);
    temp ->next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d)
{
    //create new node
    node *temp = new node(d);
    tail -> next = temp;      // bcz 1 hi element hai..  isliye tail
    tail = tail -> next;      // tail = temp;
}

'''   // my approach when there are more than 1 elements
void insertAtTail(node* &head, int d)
{
    node* temp = head;
    node* tail = new node(d);
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = tail;
}
'''

void print(node * &head)        // not necessary to reference head
{
    // create temp pointer for traversing
    node *temp = head;
    

    while(temp != NULL)
    {
        cout << temp ->data <<" ";
        temp = temp ->next;
    }
    cout << endl;
}

void insertAtPos(node* &head, int pos, int d, node* &tail)
{
    //insert at starting
    if(pos == 1)
        return insertAtHead(head, d);     //updating head

    //traverse till n-1 node
    node *temp = head;

    int cnt = 1;  // we are at 1st node
    while(cnt < pos-1)
    {
        temp = temp -> next;
        cnt++;
    }

    // now temp is at n-1
    if(temp -> next == NULL)      // inserting after last node
        return insertAtTail(tail, d);     //updating tail

    //create new node for 'd'
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(node* &head, int pos, node* &tail)
{
    // starting pos
    if(pos == 1)
    {
        node* temp = head;   // to delete it later
        head = head -> next;   // curr -> next also fine
        // memory free 
        temp -> next = NULL;   // remove link
        delete temp;
    }
    else    // middle or last pos
    {
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;

        while(cnt < pos)
        {
            prev = curr;
            curr = curr -> next;  // curr ko aage bda dia
            cnt++;
            if(curr -> next == NULL)    // xtra
                tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;   // free m/m
    }
}

int main()
{
    //create a new node
    node *n = new node(10);
    //cout << n->data << endl;
    //cout << n->next << endl;
    //cout << sizeof(n) << endl;

    node *head = n;
    node *tail = n;   // bcz 1 hi element hai
   // print(n);

    insertAtHead(n, 12);   // n == head
    
    insertAtTail(tail, 14);

    insertAtPos(n, 1, 13, tail);   // n == head

    print(n);     // print(head);

    deleteNode(n, 4, tail);

    print(n);

    cout << "tail is at " << tail -> data << endl;
    return 0;
}
