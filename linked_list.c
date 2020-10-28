#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;

};
void traversal(struct node*head)
{
  while(head!=NULL)
  {
printf("%d\n",head->data);
head=head->next;

  }
}
int main()
{

struct node*head;
struct node*first;
struct node*second;
struct node*third;

head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));


head->data=20;
head->next=first;


first->data=10;
first->next=second;


second->data=30;
second->next=third;


third->data=40;
third->next=NULL;

printf("Linked list is printed below \n");
traversal(head);


}