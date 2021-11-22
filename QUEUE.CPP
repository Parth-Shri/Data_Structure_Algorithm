#include<iostream.h>
#include<conio.h>
#define size 4
int queue[size];
int front=-1;
int rear=-1;
//For insertion an element in queue => enqueue function.
void enqueue(int val)
{
 if(rear>size-1)
 cout<<"Overflow"<<endl;
 else if(front==-1&&rear==-1)
 {
  front=rear=0;
  queue[rear]=val;
 }
 else
 {
  rear++;
  queue[rear]=val;
 }
}
//For displaying the elements present in queue => Display function.
void display()
{
 int i;
 if(front==-1&&rear==-1)
 cout<<"Empty"<<endl;
 else
 {
  for(i=front;i<=rear;i++)
  {
   cout<<"-->"<<queue[i]<<endl;
  }
 }
}
void main()
{
  clrscr();
  enqueue(12);
  enqueue(13);
  enqueue(14);
  enqueue(15);
  //enqueue(16);

  display();
  enqueue(17);
  display();
  getch();
}