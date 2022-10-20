#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void linkedlistTraversal(struct Node *ptr){
    while(ptr != NULL){

    printf("%d\n", ptr->data);
    ptr=ptr->next;
   } 
   }
   struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
   }
   struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
      ptr->data = data;
      struct Node * p = head;
      while (p->next!= NULL)
   
     p = p->next;
   
   p->next = ptr;
   ptr->next = NULL;
 
    return head;
   }
    struct Node * insertAtIndex(struct Node *head, int data, int index){
          struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
          struct Node * p = head;
          int i  =  0;
          while (i!=index-1)
          {
            p = p->next;
            i++;
          }
          ptr->data = data;
          ptr->next = p->next;
          p->next = ptr;
        return head;
    }
int main(){
        struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
  
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
       head->data=7;
      head->next=second;
        second->data=15;
        second->next=third;
         third->data=56;
        third->next=NULL;
        linkedlistTraversal(head);
        // head = insertAtFirst(head, 10);
    //    head = insertAtIndex(head, 10, 1);
       head = insertAtEnd(head, 10);
      linkedlistTraversal(head);
      return 0;
}