#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
# define size 6
class queue
{
 public:int rear, front;
 int ch ;
 int q[size] ;
 public:queue()
 {
  rear=front=-1 ;
 }
  void insert_queue() ;
  void delete_queue() ;
  void display_queue() ;
 } ;
 void queue::insert_queue()
 {
  if((front==0)&&(rear==size-1))
  {
   cout<<"\n overflow" ;
   rear=1 ;
   return ;
  }
  else
  if(front<0)
  {
   front=0 ;
   rear=0 ;
   cout<<"\nInput the element:" ;
   cin>>ch ;
   q[rear]=ch ;
  }
  else
  if(rear==size-1)
  {
   rear=0 ;
   cout<<"\n Input the element:" ;
   cin>>ch ;
   q[rear]=ch ;
  }
  else
  {
   rear++ ;
   cout<<"\n Input the element:" ;
   cin>>ch ;
   q[rear]=ch ;
  }
 }
 void queue::delete_queue()
 {
 if(front<0)
 {
  cout<<"\n Underflow" ;
  return ;
 }
 ch = q[front] ;
 q[front]=NULL ;
 cout<<"\n Element deleted:"<<ch ;
 if(front==rear)
{
 front=-1 ;
 rear=-1 ;
 }
 else
 if(front==size-1)
 {
  front=0 ;
  }
  else
  {
   front++ ;
  }
 }
 void queue::display_queue()
 {
  if(front<0)
  return ;
  if(rear>=front)
  {
   for(int i=front; i<=rear; i++)
   {
    cout<<"\ni="<<i ;
    cout<<" "<<q[i] ;
   }
  }
  else
  {
   for(int i; i<=rear; i++)
   {
    cout<<"\ni="<<i ;
    cout<<" "<<q[i] ;
    }
   }
  }
  void main()
  {
   queue q ;
   int k=0 ;
   char choice ;
   do
   {
    cout<<"\nInsert->i,deleted->d,quit->q:" ;
    cout<<"\nInput the choice:" ;
    do
    {
     cin>>choice ;
     choice=tolower(choice) ;
     }
     while(strchr("idq",choice)==NULL) ;
     cout<<"Your choice is->"<<choice ;
     switch(choice)
     {
      case'i':
      q.insert_queue() ;
      cout<<"\nQueue after inserting" ;
      q.display_queue() ;
      break ;
      case'd':
      q.delete_queue() ;
      cout<<"\n Queue content after deletion is as fallows:\n" ;
      q.display_queue() ;
      break ;
      case'q':k=1 ;
     }
    }while(!k) ;
   }
