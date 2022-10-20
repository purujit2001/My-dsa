#include<stdio.h>
#include<stdlib.h>
void(insert);
void(delete);
void(display);
int arr[100];
int rear=-1;
int front=-1;
int main(){
    int choice;
    while (1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            insert();
           break;
            case 2:
            delete();
           break;
            case 3:
            display();
           break;
            case 4:
            exit(1);
            default:
            printf("wrong choice");
        }
    }
}
void(insert){
    int add_item;
    if(rear==MAX-1)
    printf("Queue overflow");
    else{
        if(front==-1)
        front=0;
        printf("Insert the element in yhe queue\n");
        scanf("%d", add_item);
        rear=rear+1;
        arr[rear]=add_item;
    }
}
void(delete){
    if(rear==-1)
    printf("Queue is underflow\n");
    return;
    else{
        printf("Element deleted from queue\n");
        rear=rear-1;
    }
}
void(display){
    if(front=-1)
    printf("Queue is empty\n");
    else{
        printf("Queue is:");
        for(int i=0;i<=rear;i++){
            printf("%d" arr[i]);
        }
    }
}