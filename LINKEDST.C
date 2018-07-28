#include<stdio.h>
#include<conio.h>
struct Node
{
 int data;
 struct Node *next;
 }*top = NULL;
void push(int);
void pop();
void display();

void main()
{
 int choice,value;
 clrscr();
 printf("\n :: Stack using Linked List :: \n");
 while(1)
 {
  getch();
  printf("\n ***** MENU *****\n");
  printf(" 1. Push \n 2. Pop \n 3. Display \n 4. Exit \n");
  printf("\n Enter your choice :  ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1 : printf("\n Enter the value to be insterted : ");
	    scanf("%d",&value);
	    push(value);
	    break;
   case 2 : pop();
	    break;
   case 3 : display();
	    break;
   case 4 : exit(0);
   default : printf("\n Wrong selection !!! Please try again !!!");
  }
 }
}
void push(int value)
{
 struct Node *newNode;
 newNode =  (struct Node*)malloc(sizeof(struct Node));
 newNode->data = value;
 if(top == NULL)
	newNode->next = NULL;
 else
	newNode->next = top;
 top = newNode;
 printf("\n Insertion is Success !!! \n");
}
void pop()
{
 if(top == NULL)
	printf("\n Stack is Empty !!! \n");
 else
 {
  struct Node *temp = top;
  printf("\n Deleted Element : %d ",temp->data);
  top = temp->next;
  free(temp);
 }
}
void display()
{
 if(top == NULL)
	printf("\n Stack is Empty !!! \n");
 else
 {
  struct Node *temp = top;
  while(temp->next != NULL)
  {
   printf("%d ---> ",temp->data);
   temp = temp->next;
  }
  printf("%d ---> NULL",temp->data);
 }
}
