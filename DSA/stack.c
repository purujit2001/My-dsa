#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){

    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
if(ptr->top==ptr->size-1){
    return 1;
}
else{
    return 0;
}
}
int main(){
    // struct stack s;
    // s.size=50;
    // s.top=-1;
    // s.arr= (int*)malloc(s.size*sizeof(int))
    struct stack *s;
    s->size=50;
    s->top=-1;
    s->arr= (int*)malloc(s->size*sizeof(int));
    //pushing an array element
    s->arr[0]=7;
    s->top++;
    //check the stack  is empty
    if(isEmpty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    return 0;
}