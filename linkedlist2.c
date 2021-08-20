#include <stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node * next;
}node;

node * create(int);
node * insert_beg(node *start);
node * insert_end(node *start);
node * insert_before(node *start);
node * insert_after(node *start);
node * delete_beg(node *start);
node * delete_end(node *start);
node * delete_node(node *start);
void display(node *start);

int main() {
  int n,ch;
  node *start=NULL;
  do
{
printf("\n\n *****MAIN MENU *****");
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Add a node at the beginning");
printf("\n 4: Add a node at the end");
printf("\n 5: Add a node before a given node");
printf("\n 6: Add a node after a given node");
printf("\n 7: Delete a node from the beginning");
printf("\n 8: Delete a node from the end");
printf("\n 9: Delete a given node");
printf("\n 10: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("How many nodes:");
scanf("%d",&n);
start = create(n);
break;
case 2: 
      display(start);
      break;
case 3: start = insert_beg(start);
      break;
case 4: start = insert_end(start);
    break;
case 5: start = insert_before(start);
    break;
case 6: start = insert_after(start);
break;
case 7: start = delete_beg(start);
break;
case 8: start = delete_end(start);
break;
case 9: start = delete_node(start);
break;
}
}while(ch !=10);
return 0;
}

node * create(int n)
{
  int i;
    node *start=NULL;
    node*newnode=NULL;
    node *ptr=NULL;
    for(i=0;i<n;i++)
  {
    newnode=(node *)malloc(sizeof(node));
    printf("Enter the data for node number %d:",i+1);
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(start==NULL)
    {
      start=newnode;
    }
    else
    {
      ptr=start;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=newnode;
    }
  }
  return start;
 }

 void display(node *start)
{
  node * ptr=start;

   while(ptr!=NULL)
      {
        printf("\t%d-->",ptr->data);
        ptr=ptr->next;
      }


}

node * insert_beg(node *start)
{
node *new_node;
int item;
printf("Enter data:");
scanf("%d",&item);
new_node=(node *)malloc(sizeof(node));
new_node->data=item;
new_node->next=start;
start=new_node;

return start;
}

node * insert_end(node *start)
{

node *new_node;
node *ptr;
int item;
printf("Enter data:");
scanf("%d",&item);
new_node=(node *)malloc(sizeof(node));
new_node->data=item;

ptr=start;
while(ptr->next!=NULL)
{
  ptr=ptr->next;
}
  ptr->next=new_node;
new_node->next=NULL;

return start;
}

node * insert_before(node *start)
{

return start;
}
node * insert_after(node *start)
{

return start;
}
node * delete_beg(node *start)
{

return start;
}
node * delete_end(node *start)
{
    
   return start;
}
node * delete_node(node *start)
{

return start;
}