#include<iostream>
using namespace std;
template <class T>
class Queue
{
    public:
    T a[100];
    int size;
    int i;
    int front = -1;
    int tail = -1;

        return a[++front];
    }
    T peek()
    {
         cout<<"\n"<<a[front+1];
    }
};
int main()
{
    Queue <char>queue;
    char a;
    queue.enque('a');
    queue.enque('b');
    a = queue.deque();
    cout<<a;
    queue.peek();
}   void enque(T ele)
    {
        a[++tail] = ele;
    }
    T deque()
    {
        return a[++front];
    }
    T peek()
    {
         cout<<"\n"<<a[front+1];
    }
};
int main()
{
    Queue <char>queue;
    char a;
    queue.enque('a');
    queue.enque('b');
    a = queue.deque();
    cout<<a;
    queue.peek();
}
