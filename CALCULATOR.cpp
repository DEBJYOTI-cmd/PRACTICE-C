#include<stdio.h>
int addition(int x,int y)
{
	int result;
	result=x+y;
	return result;
}

int subtraction(int x,int y)
{
	int result;
	result=x-y;
	return result;
}

int multiplication(int x,int y)
{
	int result;
	result=x*y;
	printf("%d",result);
	return 0;
}

int divison(int x,int y)
{
	int result;
	result=x/y;
	return result;
}




int main()
{
	int ch,a,b,result;
	printf("Your choice--\n1.+\n2.-\n3.*\n4./\n");
	printf("Which option you want to choose:-");
	scanf("%d",&ch);
	 
	printf("Enter any two number");
	scanf("%d%d",&a,&b);
	
	switch(ch)
	{
		case 1: printf("You entered option 1\n");
		int add;
		add=addition(a,b);
		printf("%d",add);
		break;
	}
	switch(ch)
	{
		case 2: printf("You entered option 2\n");
		int sub;
		sub=subtraction(a,b);
		printf("%d",sub);
		break;
	}
	
	switch(ch)
	{
		case 3: printf("You entered option 3\n");
		int mul;
		mul=multiplication(a,b);
		break;
	}
	
	switch(ch)
	{
		case 4: printf("You entered option 4\n");
		int div;
		div=divison(a,b);
		printf("%d",div);
		break;
	}
				
	
}


