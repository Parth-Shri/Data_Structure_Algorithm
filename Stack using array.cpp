#include<iostream.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;         //It indicates that the stack is empty

void push(int val)
{
 if(top==size-1)
 {
  cout<<"\nStack Overflow";
  return;
 }

 top++;
 stack[top]=val;

}
void main()
{
 clrscr();
 int i;
 cout<<"\nBy Parth Shrivastava"<<endl;
 push(30);
 push(10);
 push(12);
 push(34);
 push(90);
 push(19);
 cout<<"\nElements in stack are :-";
 for(i=top;i>=0;i--)
 {
  cout<<stack[i]<<",";
 }
 getch();
}
