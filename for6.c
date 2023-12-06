#include<stdio.h>

main()

{
	int i,n;
	printf("Enter Value N = ");
	scanf("%d",&n);
	 
	 for(i = 1,n; i<=n; n--)
	 {
	 	if(n%2==0)
	 	{
	 		printf("%d\n",n);
		 }
	 }
}