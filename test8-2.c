#include<stdio.h>
#include<string.h>

int main(){
	char a[100]={0};
	scanf("%[^\n]",a);
	int i = 0;
	int b = 0;
	int c = 0;
	int sz = sizeof(a);
	for(i;i<sz;i++){
		if(a[i]>='a'&&a[i]<='z'){
			b++;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			c++;
		}
	}
	printf("大写字母:%d,小写字母:%d",c,b);
	return 0;
}