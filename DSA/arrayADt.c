 #include<stdio.h>
 #include<stdlib.h>
 struct arrayADt
 {
    int total_size;
    int used_size; 
    int *ptr;
 };
    void createArray(struct arrayADt* a, int tsize, int usize){
        // (*a).total_size = tsize;
        // (*a).used_size = usize;
        // (*a).ptr= (int*)malloc(tsize*sizeof(int));
              a->total_size = tsize;
        a->used_size = usize;
        a->ptr= (int*)malloc(tsize*sizeof(int));
    }
    void show(struct arrayADt *a)
    {
        for (int i = 0; i < a->used_size; i++)
        {
            printf("%d\n",a->ptr[i]);
        }
        
    };
    void setVal(struct arrayADt *a)
    {
        int n;
        for (int i = 0; i < a->used_size; i++)
        {
            printf("Enter element %d", i);
            scanf("%d",&n);
            (a->ptr)[i]=n;
        }
        
    };

 int main(){
    struct arrayADt marks;
    createArray(&marks, 10, 2);
    setVal(&marks);
    show(&marks);
    return 0;
 }