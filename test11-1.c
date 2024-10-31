#include<stdio.h>
#include<string.h>

int main(int argc,char*argv[]){
    char a[1000];
    scanf("%s",a);
    if(argc>1){
    if(strcmp("-u",argv[1])==0){
        for(int i = 0;i<1000;i++){
            if(a[i]>='a'&&a[i]<='z'){
                a[i]-=32;
            }
        }
    }
    else if(strcmp("-i",argv[1])==0){
        for(int i = 0;i<1000;i++){
            if(a[i]>='A'&&a[i]<='Z'){
                a[i]+=32;
            }
        }
    }
    }
    printf("%s",a);
    return 0;
}