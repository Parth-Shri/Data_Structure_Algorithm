#include<iostream.h>
#include<conio.h>
#include<malloc.h>
struct Dbl
{
 int data;
 struct Dbl *Lptr;
 struct Dbl *Rptr;
}*L,*R;
struct Dbl *create(int val);
struct Dbl *create(int val)
{
 struct Dbl *new2;
 new2 = new Dbl;
 new2->data=val;
 return(new2);
}
void main()
{
 clrscr();
 struct Dbl *d1,*d2,*d3,*d4;
 d1 = create(67);
 L=d1;
 d1->Lptr=NULL;
 d2 = create(23);
 d2->Lptr=d1;
 d1->Rptr=d2;
 d3= create(55);
 d3->Lptr=d2;
 d2->Rptr=d3;
 d4 = create(90);
 d4->Lptr=d3;
 d3->Rptr=d4;
 d4->Rptr=NULL;
 R=d4;
 cout<<"\nBy Parth Shrivastava"<<endl;
 cout<<"\nDouble linked list is :"<<endl;
 cout<<"\nL<-->";
 struct Dbl *temp=L;
 while(temp!=NULL)
 {
   cout<<temp->data<<"<-->";
   temp = temp->Rptr;
 }
 cout<<"NULL";
 getch();
}