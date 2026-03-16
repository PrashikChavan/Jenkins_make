#include "display.h"

struct node* head=NULL;
struct node* create_list(int data)
{
 struct node* temp=head;
 while(temp->link!=NULL)
 {
  temp=temp->link;
 }
 temp->link=malloc(sizeof(struct node));
 temp->link->data=data;
 temp->link->link=NULL;
}

void display()
{
 struct node* ptr=head;
 while(ptr!=NULL)
 {
  printf("%d ",ptr->data);
  ptr=ptr->link;
 }
 printf("\n");
}

void nth_node_from_last(int n)
{
 int count=0;
 struct node* ptr2=head;
 while(ptr2!=NULL)
 {
  count++;
  ptr2=ptr2->link;
 }
 
 ptr2=head; 
 for(int i=0;i<count-n && ptr2->link!=NULL;i++)
 {
  ptr2=ptr2->link;
 }
 printf("from last nth node is %d",ptr2->data);
}
