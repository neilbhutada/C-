#include<iostream>
using namespace std;

void hanoi(int disk , char source , char destination , char auxilary)
{
  if(disk==1)
  {
      cout<<"disk "<<disk<<"from "<<source<<" to "<<destination<<endl;
      return;
  }
  else
  {
      hanoi(disk-1,source,auxilary,destination);
      cout<<"disk"<<disk<<"from "<<source<<" to "<<destination<<endl;
      hanoi(disk-1,auxilary,destination,source);
      return;
  }
}
int main()
{
    hanoi(5,'A','C','B');
}
