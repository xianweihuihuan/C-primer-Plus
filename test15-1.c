#include<stdio.h>
int find(int a,int n){
    int i =0;
    int c[100];
    while(a/2!=0){
        int j = a%2;
        c[i++]=j;
        a/=2;
    }
    c[i++] = a%2;
    int g[100];
    for(int len =0;len<i;len++){
        g[i-len-1]=c[len];
    }
    if(g[n-1]==1){
    return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int a= 0;
    scanf("%d",&a);
    int n =0;
    scanf("%d",&n);
    int c=find(a,n);
    printf("%d",c);
    return 0;
}