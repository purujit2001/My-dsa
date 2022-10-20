#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
   struct node* next;
};
void traversal(struct node* ptr){
while(ptr!=NULL){
    printf("%d\n", ptr->data);
    ptr=ptr->next;
}
}
struct node * insertatFirst(struct node*head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=head;
    return ptr;
}
struct node * insertatIndex(struct node*head, int data, int index){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    ptr->data = data;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node * insertatEnd(struct node*head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node* delatFirst(struct node*head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* delatIndex(struct node*head, int index){
    struct node * p= head;
    struct node * q = head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node* delatEnd(struct node*head){
    struct node * p= head;
    struct node * q = head->next;
    while(q->next!=NULL){
      p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=23;
    head->next=second;
    second->data=34;
    second->next=third;
    third->data=45;
    third->next=fourth;
    fourth->data=65;
    fourth->next=NULL;
    printf("\nlinkedlist before insertion at first\n");
    traversal(head);
    printf("\nlinkedlist after insertion at first\n");
    // head=insertatFirst(head, 100);
    // head=insertatIndex(head,100,2);
    // head=insertatEnd(head,100);
    // head=delatFirst(head);
    // head=delatIndex(head,2);
    head= delatEnd(head);
      traversal(head);
    return 0;
}