#include<stdio.h>
#include<stdlib.h>

typedef struct book{
    char name[20];
    int jiage;
}book;
void paixu1(book*a,int n){
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(*(a[j].name)>*(a[j+1].name)){
                book c =a[j];
                a[j]=a[j+1];
                a[j+1] = c;
            }
        }
    }
}
void paixu2(book*a,int n){
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(a[j].jiage>a[j+1].jiage){
                book c =a[j];
                a[j]=a[j+1];
                a[j+1] = c;
            }
        }
    }
}


int main(){
    int n =0;
    scanf("%d",&n);
    book*a = (book*)malloc(n*sizeof(book));
    printf("请输入，书名及价格");
    for(int i = 0;i<n;i++){
        scanf("%s %d",a[i].name,&a[i].jiage);
    }
    paixu1(a,n);
    for(int i =0;i<n;i++){
        printf("%s %d\n",a[i].name,a[i].jiage);
    }
    paixu2(a,n);
    for(int i =0;i<n;i++){
        printf("%s %d\n",a[i].name,a[i].jiage);
    }
    return 0;
}