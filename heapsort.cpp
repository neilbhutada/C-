8#include<iostream>
using namespace std;
int main()
{
int i,j,k=0 , size;
int a[100] , b[100];
cout<<"Enter size";
cin>>size;
int temp;
cout<<"Enter array";
for(i=0 ; i <size;i++)
{
cin>>a[i];
}
for(i = size-1 ; i>=0 ; i--)
{
for(j = i ; j>=1;j--)
{
   if(j%2==0)
   {
      if(a[(j-2)/2]<a[j])
      {
       temp = a[j];
       a[j]  = a[(j-2)/2];
       a[(j-2)/2] = temp;
      }
   }
   else
   {
     if(a[(j-1)/2]<a[j])
      {
       temp = a[j];
       a[j]  = a[(j-1)/2];
       a[(j-1)/2] = temp;
      }
   }
}
b[k++] = a[0];
a[0] = a[i];
}
cout<<"\n"<<"Sorted Array is";
for(i=0 ; i <size ; i++)
{
    cout<<"\n"<<b[i];
}
}
