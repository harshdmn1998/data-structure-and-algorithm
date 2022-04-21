#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct nodetype
  {
    int info;
    struct nodetype *next;

  }node;

void create_list(node **head);
void traverseinorder(node *head);
void insertatbeg(node **head,int item);

void main()
  {
    node *head;
    int choice,element,after;
    create_list(&head);

    while(1)
    {
      printf("Operations available are :\n");
      printf(" 1. Insert at Beginning \n");
      printf(" 2. Traverse in order \n");
      printf("Enter Choice");
      scanf("%d",&choice);

      switch(choice)
      {

	case 1:
	printf("\nEnter element :\n");
	scanf("%d",&element);
	insertatbeg(&head,element);
	break;

	case 2:
	if(head==NULL)
	printf("\nList is Empty !");
	else
	traverseinorder(head);
	printf("\nPress any key to continue !");
	getch();
	break;
	default:
	exit(0);
      }


    }


  }

void create_list(node **head)
  {
    *head=NULL;
  }


void insertatbeg(node **head, int item)
  {
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL)
    ptr->next=NULL;
    else
    ptr->next=*head;
    *head=ptr;
  }

void traverseinorder(node *head)
  {
    while(head!=NULL)
    {
      printf("\n%d",head->info);
      head=head->next;

    }
    printf(" End");

  }






