#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
class LinkedList
{
public:

struct node *head = NULL , *tail = NULL;
void add(int num)
{
    struct node *new_node = new node;
    new_node->data = num;
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;

    }
    else
    {
        tail->link = new_node;
        tail = new_node;

    }
}
void search(int num)
{

    int flag = 0;
    struct node *point;
   point = head;
    while(point != NULL)
    {
        flag++;

        if(num == point->data)
        {
          cout<<"\n"<<num<<" found at "<<flag;
        }
        point = point->link;
    }

}
void insertAtPosition(int num, int pos)
{

    struct node *point;
    point = head;


int flag = 0;
while(flag<pos-2)
{
    flag++;
    point = point->link;
}
cout<<"\n"<<"\n"<<point->data;
struct node *insert = new node;
insert->data = num;
insert->link = point->link;
point->link = insert;

}
void headInsertion(int num)
{
    struct node *temp = new node;
    temp->data = num;
    temp->link = head;
    head = temp;

}
void tailInsertion(int num)
{
    int size = 0;
    struct node *point;
    point = head;
    cout<<"Hello";
    cout<<"\n"<<point->data;
    while(point!=NULL)
    {
        size++;
        point = point->link;
    }
    insertAtPosition(num , size+1);

}
void del(int pos)
{
    int size = 0;
    int flag = 0;
   struct node *point;
    point = head;
    while(point != NULL)
    {
        flag++;
        point = point->link;
    }
    if(pos==1)
    {
        point = head;
        point = point->link;
        head = point;
    }
    else if(pos==flag)
    {
        while(size<pos-2)
        {
            size++;
            point = point->link;

        }
        tail = point;
    }

    else
    {
    point = head;
    size =0;
    while(size<pos-1)
    {
        size++;
        point = point->link;
    }
    cout<<"\n"<<"element deleted"<<point->data;
    struct node *point1;
    point1 = head;
    size = 0;
    while(size<pos-2)
    {
        size++;
        point1 = point1->link;
    }
    struct node *point2;
    point2 = head;
    size = 0;
   while(size<pos)
   {
    size++;
    point2 = point2->link;
   }
   point1->link = point2;
    }
}
void reverse()
{
struct node *current = NULL;
struct node *back = NULL;
struct node *next = NULL;
current = head;
while(current != NULL)
{
    next = current->link;
    current->link = back;
    back = current;
   current = next;

}
head = back;



}
void print()
{
    struct node *point;
    point = head;
    while(point != NULL)
    {
        cout<<"\n"<<(point->data);
        point = point->link;
    }
}

};
int main()
{
    LinkedList list;
    list.add(4);
    list.add(6);
    list.add(9);

    list.print();
    list.insertAtPosition(5,4);
    cout<<"\n"<<"\n";
    list.print();
    list.search(9);
    list.headInsertion(10);
    cout<<"\n";
    list.print();
    list.tailInsertion(11);
    cout<<"\n";
    list.print();
    list.del(3);
    cout<<"\n";
    list.print();
    cout<<"\n";
    list.reverse();
    cout<<"\n";
    list.print();

}
