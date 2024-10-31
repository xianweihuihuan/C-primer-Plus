#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
typedef struct zhiyin{
    int data;
    int ding;
    char *name;
    char *xing;
}zhiyin;

int main(){
    zhiyin a[12];
   
    char b;
    for(int i= 0;i<12;i++){
        a[i].data = i+1;
        a[i].ding = 0;
        a[i].xing = NULL;
        a[i].name = NULL;
    }
    while(1){
    printf("To choose a function,enter its letter label:\n");
    printf("a) Show number of empty seats\n");
    printf("b) Show list of empty seats\n");
    printf("c) Assign a customer to a seat assignment\n");
    printf("d) Delete aseat assignment\n");
    printf("e) Quit\n");
    scanf("%c",&b);
    switch(b)
    {
        case 'a':
            int c= 0;
            for(int i =0;i<12;i++){
                if(a[i].ding == 0)
                {
                    c++;
                }
            }
            printf("%d\n",c);
            break;
        case 'b':
            for(int i =0;i<12;i++){
                if(a[i].ding==0){
                    printf("%d\n",a[i].data);
                }
            }
            break;
        case 'c':
            printf("请输入座位编号：");
            int d = 0;
            scanf("%d",&d);
            for(int i = 0;i<12;i++){
                if(a[i].data==d){
                    if(a[i].ding==0){
                        a[i].ding=1;
                        a[i].xing= (char*)malloc(20);
                        a[i].name= (char*)malloc(20);
                        printf("请输入姓名：");
                        scanf("%s %s",a[i].xing,a[i].name);
                        break;
                    }
                    else{
                        printf("这个座位已经有人了\n");
                        break;
                    }
                }
            }
            break;
        case 'd':
            for(int i =0;i<12;i++){
                a[i].ding = 0;
                if(a[i].name!=NULL&&a[i].xing!=NULL){
                free(a[i].name);
                free(a[i].xing);
                a[i].name =NULL;
                a[i].xing =NULL;
                }
            }
        break;
    }
    if(b == 'e')
    {
        break;
    }
    }
    return 0;
}
