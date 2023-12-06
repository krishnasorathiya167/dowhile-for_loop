#include<stdio.h>

main()
{
	int i = 1 ,n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",n);
		n--;
	}while(i<=n);
}