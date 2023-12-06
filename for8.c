#include<stdio.h>

main()
{
	int i,n,sum;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i = 1,n,sum = 0;i<=n;i++)
	{
		printf("%d\n",i);
		sum = i + sum;
	}
		printf("Sum of 1 to N = %d",sum);
}