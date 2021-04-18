#include<stdio.h>

int add()
{
	int a,b,result;
	printf("Enter any two number-");
	scanf("%d%d",&a,&b);
	result=a+b;
	printf("%d",result);
}

int main()
{
	printf("Func call part----");
	add();
}
