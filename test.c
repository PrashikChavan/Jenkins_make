#include "display.h"
int main()
{
 head=malloc(sizeof(struct node));
 head->data=10;
 head->link=NULL;

 create_list(20);
 create_list(90);
 create_list(60);
 create_list(120);
 display();
 int n=3;
 nth_node_from_last(n);
 return 0;
}
