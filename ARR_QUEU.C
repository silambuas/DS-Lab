#include<stdio.h>
#include<conio.h>
#define MAX 50
int queue_array[MAX];
int rear = -1;
int front = -1;
void main()
{
 int choice;
 while(1)
 {
  printf("\n 1.Insert element to queue \n ");
  printf("2.Delete element from queue \n");
  printf("3.Display all element of queue \n");
  printf("4.Quit \n ");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:insert();
	  break;
   case 2:delete();
	  break;
   case 3:display();
	  break;
   case 4:exit(1);
   default:printf("\n Wrong Choice !!!!");
  }
 }
}
insert()
{
 int add_item;
 if(rear == MAX-1)
	printf("\n Queue overflow ");
 else
 {d
  printf("\n Enter the element to insert in queue : ");
  scanf("%d",&add_item);
  rear = rear+1;
  queue_array[rear]=add_item;
  printf("\n Element Inserted !!!");
 }
}
delete()
{
 if(front == -1 || front > rear)
 {
  printf("\n Queue Underflow ");
  return;
 }
 else
 {
  printf("\n Element deleted from queue is : %d ",queue_array[front]);
  front = front+1;
 }
}
display()
{
 int i;
 if(front == -1)
	printf("\n Queue is empty ");
 else
 {
  printf("\n Queue is : ");
  for(i=front;i<=rear;i++)
	printf("%d",queue_array[i]);
  printf("\n");
 }
}