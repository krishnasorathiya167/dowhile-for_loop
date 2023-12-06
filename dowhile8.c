#include<stdio.h>

main()

{
	int i = 1 , n , sum = 0;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		sum = sum + i;
		i++;
	}while(i<=n);
	
	printf("Sum Of 1 to N = %d",sum);
}