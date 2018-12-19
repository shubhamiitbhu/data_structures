#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};
struct Node *head, *tail;


void insert(int x)
{
    Node *temp = new Node;
    Node *p;



    temp->data = x;
    temp->next = head;
    if (temp->next != NULL)
    {temp->next->prev = temp; temp->prev=NULL;}
    else
    {temp->prev = NULL; tail= temp;}


    head = temp;




}

void printforward()
{
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void printbackward()
{
    Node *temp;
    temp=tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp=temp->prev;
    }
}

int main()
{

    head = NULL;
    tail=NULL;
    insert(2);insert(2);
    insert(3);
    insert(4);insert(2);
    insert(3);
    insert(4);insert(2);
    insert(3);
    insert(4);

    printforward();
    cout << endl;
    printbackward();
}
