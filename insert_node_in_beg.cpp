#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    
};
node *head;  // to store the add. of head node
void Insert(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = head;  //head me phle node ka address store hoga, starting me NULL hai
    head = temp;
}
void Print()
{
    node *temp = head;  // for node traversal
    cout << "List is ";
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}
int main(void)
{
    head = NULL;
    cout << "How many nos : \n";
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++) {
        cout << "Enter the no. ";
        cin>>x;
        Insert(x);
        Print();
    }

}