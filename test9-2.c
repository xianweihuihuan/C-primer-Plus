#include<stdio.h>
void to_base(int a,int b){
    if(a/b==0){
        printf("%d",a%b);
        return;
    }
    to_base(a/b,b);
    printf("%d",a%b);
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    to_base(m,n);
    return 0;
}