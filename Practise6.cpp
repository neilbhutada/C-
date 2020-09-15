#include<iostream>
using namespace std;
template<class T>
class Stack_Op
{
public:
 T a[100];
 int top = -1;
 void push(T ele)
 {

     a[++top] = ele;

 }
 T pop()
 {
     if(top==(-1))
     {
          cout<<"Stack is empty";
     }
       else
     {

         return a[top--];
     }
 }
 void sum()
 {
     T num1 = pop();
     T num2 = pop();

     push(num1+num2);
 }
 int power_of_10(int i)
 {
     int ans = 1;
     for(int j = 1 ; j<=i;j++)
     {
         ans = 10*ans;
     }

     return ans;
 }
 void answer()
 {
     cout<<"\n"<<"Sum is "<<pop();
 }
 void begin( T num , int flag)
 {
     int i;
     for(i = flag-1;i>=1;i--)
     {

         push(num/(power_of_10(i)));

         if(top == 1)
         {

             sum();
         }
         num = num%(power_of_10(i));
     }

     push(num);
     sum();
 }


};
int main()
{
    Stack_Op <int> stk;
    int num;
    cout<<"Enter number";
    cin>>num;
    int num1 = num;
    int flag = 0;
    while(num1 != 0)
    {
        num1 = num1/10;
        flag++;
    }

    stk.begin(num , flag);
    stk.answer();

}
