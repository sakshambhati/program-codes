#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node *head;
void Reverse() {
    node *temp, *prev;
    temp = head;
    prev = NULL;
    while(temp != NULL) 
    {
        temp->next = prev;

}
int main()
{
    //head = NULL;
}