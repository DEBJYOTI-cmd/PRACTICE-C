//PUSH//
#include<stdio.h>
main()
{
	int max,tos;
	int s[max];
	printf("How many room you want to create:-");
	scanf("%d",&max);
	
	for(tos=-1;tos<=max-1;  )
	{	
	tos++;
	scanf("%d",&s[tos]);
	}
	
	//DISPLAY//
	
	for(tos=0;tos<=max-1;tos++)
	{
		printf("%d",s[tos]);
	}
}





