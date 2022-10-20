#include<stdio.h>
void display(int arr[], int n){
    //code for traversal
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
}
    void  indexDeletion(int arr[],int  size, int index){
        //code for deletion
        for(int i= index; i<size-1; i++){
            arr[i]=arr[i+1];
        }
    }
int main(){
    int arr[100]={1,2,4,7,9,12,17};
    int size=7, element=50, index=3;
    display(arr,size);
    
    indexDeletion(arr, size, index);
    size-=1; //??this line for the added one extra element=> size increased by 1
      display(arr,size);
    return 0;
}