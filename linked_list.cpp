#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

struct Node *head;


void insert (int x)
{
  Node *temp = new Node;
  temp->data = x;
  temp->next = head;
  head = temp;


}

void print ()
{
  Node *temp;
  temp = head;
  while (temp != NULL)
    {
      cout << temp->data << " " ;
      temp = temp->next;
    }

}

void insertat(int x, int b )
{   Node *temp;
     temp = head;
    int i=1;
    if (b==0){insert(x);}
    else{
    while (i<b)
    {
        temp = temp->next;
        i++;

    }

    Node *one = new Node;

    one->data = x;
    one->next = temp->next;
    temp->next = one;


}
}


void deletenode(int n)
{
    Node *temp;
    temp = head;
    if (n==0)
    {
        head = temp->next;
        delete temp;
        return ;
    }

    int i=1;
    while (i<n)
    {
        temp = temp->next;
        i++;
    }
    Node *temp2;
    temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}


void reverselist()
{
    Node *prev, *current, *forward;
    prev = NULL;
    current = head;

    while (current != NULL)
    {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }

    head = prev;
}

int main ()
{
  head = NULL;
  int x, n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> x;
      insert (x);

    }

  print ();
  cout << "Write down the values of a and b" <<endl;
  int a,b;

  insertat(2,0);
  insertat(3,1);

  print();
  cout << "del" <<endl;
  //deletenode(0);
  //print();
  cout << "reversal" <<endl;
  reverselist();
  print();

}
