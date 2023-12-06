#include<stdio.h>

main()

{
	int i = 1 , n , fac = 1;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		fac = fac * i;
		i++;
	}while(i<=n);
	printf("factorial Of 1 to N = %d",fac);
}