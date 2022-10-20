#include<stdio.h>
 #include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void linkedlistTraversal(struct node *ptr){
    while(ptr != NULL){

    printf("%d\n", ptr->data);
    ptr=ptr->next;
   } 
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    
    //allocate memory for nodes in the linkedlist in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    //link 1st & 2nd nodes
    head->data=7;
    head->next=second;
    //link 2nd & 3rd nodes
    second->data=15;
    second->next=third;
    //terminate the list at the third node 
    third->data=56;
    third->next=NULL;

    linkedlistTraversal(head);
    return 0;

}
