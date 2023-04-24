#include<stdio.h>
main()
{
	int n,count=0;
	printf("enter number=");
	scanf("%d",&n);
	
	while(n!=0)
	
{
    n=n/10;
	count++;
}
	
	printf("the number of digit%d\n",count);	
}
