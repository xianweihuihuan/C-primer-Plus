#include<stdio.h>

int panduan(int n){
    if(n==1)
    {
        return 1;
    }
    if(n==2){
        return 1;
    }
    return panduan(n-1)+panduan(n-2);
}
int main(){
    int n = 0;
    scanf("%d",&n);
    int b = panduan(n);
    printf("%d",b);
    return 0;
}