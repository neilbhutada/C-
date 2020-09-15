#include<iostream>
using namespace std;
template<class T>
class CircularQue
{
    public:
    T a[100];
    int front = 0;
    int tail  = 0 ;
    int size;
    CircularQue()
    {
        cout<<"Enter size";
        cin>>size;
    }
    void enque(T ele)
    {
      int k = (tail+1)%size;
      if(front==k)
      {
          cout<<"Que is full";
          return;
      }
      else
      {
          a[tail] = ele;
          tail = k;
      }
    }
    T deque()
    {
        int k = front;
        if(tail == k)
        {
            cout<<"Que is empty";

        }
        else
        {
           front = (front+1)%size;
           return a[k];
        }
    }
    T peek()
    {
        if(front == tail)
        {
            cout<<"Queue is empty";

        }
        else
        {
            return a[(front)];
        }
    }

};
int main()
{
    CircularQue <int>cq;
    cq.enque(5);
    cq.enque(6);
    cq.enque(7);
    int d = cq.deque();
    int d1 = cq.deque();
    int f = cq.peek();
    cout<<d<<"\n"<<d1<<"\n"<<f;
}
