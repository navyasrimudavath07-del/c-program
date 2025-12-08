#include<stdio.h>
int main()
{
	int i,n,j,a[n],temp;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	printf("\n sorted array is :");
	for(i=0;i<n;i++) 
	{
		printf("%d",a[i]);
	}
	return 0;
}
