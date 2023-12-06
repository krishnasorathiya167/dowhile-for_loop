#include<stdio.h>

main()

{
	int i,n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	printf("Multiplication Table = \n\n");
	
	for(i = 1,n; i<=10; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}