#include<stdio.h>

int main(){
	printf("请选择要进行的操作:\n");
	printf("1.加法   2.减法\n");
	printf("3.除法   4.乘法\n");
	printf("0.退出\n");
	int n = 0;
	scanf("%d",&n);
	if(n>0&&n<5){
	int a,b;
        scanf("%d %d",&a,&b);
	switch (n){
	case 1:
		       printf("%d",a+b);
		       break;
	       
	case 2:
		       printf("%d",a-b);
		       break;
	       
	case 3:
		       printf("%d",a/b);
		       break;
	       
	case 4:
		       printf("%d",a*b);
		       break;
	}
	}
	else if(n==0)
	{
		printf("退出成功");
	}
	else{
		printf("error");
	}
	return 	0;
}
