#include<iostream>
#include<vector>
using namespace std;

class node
{
   public:
   node* prev;
   int data;
   node* next;

   //constructor
   node(int data)
   {
       this -> data = data;
       this -> prev = NULL;
       this -> next = NULL;
   }

};

void print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {   
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(node* &head)
{
    int len = 0;
    node* temp = head;

    while(temp != NULL)
    {   
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(node* &head, int d)
{
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(node* &head, int d)
{
    node* tail = new node(d);
    node* temp = head;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = tail;
    tail -> prev = temp;
}

void insertAtPos(node* &head, int pos, int d)
{
    if(pos == 1)
        return insertAtHead(head, d);

    node* temp = head;
    int cnt = 1;

    while(cnt < pos-1)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL)
        return insertAtTail(head, d);

    //create node       // ye khud se kia, aur phli baar me chl gya
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;
    node* curr = temp -> next;           // temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;         
    nodeToInsert -> prev = temp;
    curr -> prev = nodeToInsert;        //no need if above comment is used

}

void deleteNode(node* &head, int pos, node* &tail)
{
    // starting pos
    if(pos == 1)
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
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
        curr -> prev = NULL;
        prev -> next = curr -> next;      
        curr -> next = NULL;
        delete curr;   // free m/m
    }
}

int main()
{
    node* n = new node(10);
    node* head = n;
    node* tail = n;
    //print(head);

    insertAtHead(head, 8);
  //  print(head);

    insertAtTail(head, 12);
    print(head);

    insertAtPos(head, 3, 11);
    print(head);

    int len = getLength(head);
    cout <<"length is " << len << endl;

    deleteNode(head, 4, tail);
    print(head);

    return 0;
}
