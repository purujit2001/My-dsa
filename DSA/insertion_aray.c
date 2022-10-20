#include<stdio.h>
void display(int arr[], int n){
    //code for traversal
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
}
    int  indexInsertion(int arr[],int  size, int element,int capacity, int index){
        //code for insertion
        if(size>=capacity){
            return -1;
        }
        for(int i= size-1; i>=index; i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
int main(){
    int arr[100]={1,2,4,7,9,12,17};
    int size=7, element=50, index=3;
    display(arr,size);
    
    indexInsertion(arr, size, element,100, index);
    size+=1; //??this line for the added one extra element=> size increased by 1
      display(arr,size);
    return 0;
}