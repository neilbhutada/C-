#include<iostream>
using namespace std;

class DoubleLinkedList
{
public:
struct node
{ int data;
  struct node *left;
  struct node *right;
};
struct node*head = NULL;

void insert(int num)
{struct node *new_node = new node;
if(head == NULL)
{
  new_node->data = num;


  head = new_node;
}
else
{
head->right = new_node;
new_node->data = num;
new_node->left = head;

head = new_node;

}

}
int print()
{
struct node *point;
point = head;
while(point != NULL)
{
  cout<<(point->data);
  point = point->left;

}

}

};

int main()
{
DoubleLinkedList dbl;
dbl.insert(4);
dbl.insert(5);
dbl.print();
}
