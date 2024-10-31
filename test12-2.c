#include<stdio.h>
#include<stdlib.h>
int *make_array(int elem,int val){
    int*a = (int*)malloc(elem*sizeof(int));
    for(int i =0;i<elem;i++){
        a[i]=val;
    }
    return a;
}
void show_array(const int ar[],int n){
    int i = 0;
    int j = 0;
    for(int i =0;i<n;i++){
        printf("%d ",ar[i]);
        j++;
        if(j%8==0){
            printf("\n");
        }
    }
}
int main(void){
    int*pa;
    int size;
    int value;
    printf("请输入数字的个数：");
    while(scanf("%d",&size)==1&&size>0){
        printf("请输入一个数字：");
        scanf("%d",&value);
        pa = make_array(size,value);
        if(pa){
            show_array(pa,size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit)");
    }
    printf("Done.\n");
    return 0;
}