#ifndef _DISPLAY_H
#define _DISPLAY_H

#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node* link;
};

extern struct node* head;

struct node* create_list(int data);

void display();

void nth_node_from_last(int n);


#endif
