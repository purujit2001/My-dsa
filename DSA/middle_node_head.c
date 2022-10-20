#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void setMiddleElement(struct node** head)
{
if (*head==NULL)

    return;
    struct node* one_node=(*head);
    struct node* two_node=(*head);
    struct node* prev= NULL;
while(two_node!=NULL & two_node->next!=NULL){
    prev=one_node;
    one_node=one_node->next;
    two_node=two_node->next->next;
}
    prev->next=prev->next->next;
    one_node->next=(*head);
    (*head)=one_node;
}
void push(struct node* head_main, int new_data){
struct node* new_node=(struct node*)malloc(sizeof(struct node))
new_node->data= new_data;
new_node->next= head_main;
head_main= new_node;
}
