#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
	{
		printf("prime");
	}
	else
	{
		printf("not");
	}
	return 0;
}
