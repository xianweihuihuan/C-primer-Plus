#include<stdio.h>

int main(){
    char a[10000];
    scanf("%[^\n]",a);
    int d = 0;
    int b = 0;
    int c = 1;
    int i = 0;
    while(!(a[i]==0&&a[i+1]==0)){
        if(a[i]>='A'&&a[i]<='Z'){
            d++;
        }
        else if(a[i]>='a'&&a[i]<='z'){
            b++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("大写字母：%d\n小写字母:%d\n单词数：%d\n字母个数：%d",d,b,c,i-c+1);
    return 0;
}