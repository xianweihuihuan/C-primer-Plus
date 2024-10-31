#include<stdio.h>
void zhuan(int a,int n){
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
    int k =0;
    for(k;k<n;k++){
        int t = g[0];
        for(int s=0;s<i-1;s++){
            g[s]=g[s+1];
        }
        g[i-1]=t;
    }
    for(int h = 0;h<i;h++){
        printf("%d",g[h]);
    }
}
int main(){
    int a = 10;
    zhuan(a,2);
    return 0;
}

