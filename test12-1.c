#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 0;
    printf("你想输入多少个单词：");
    scanf("%d",&n);
    char**a = (char**)malloc(8*n);
    for(int i =0;i<n;i++){
        a[i] = (char*)malloc(1000);
    }
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    printf("这是你的单词：\n");
    for(int i =0;i < n;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}