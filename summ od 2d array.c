#include<stdio.h>
int main()
{
	int rows,column;
	printf("enter no of rows");
	scanf("%d",&rows);
	printf("enter ni if column \n");
	scanf("%d",&column);
	int arr[100][100],i,j;
	printf("enter the elements in 2d aray:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<column; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(i=0; i<rows; i++){
		for(j=0; j<column; j++){
			sum+=arr[i][j];
		}
	}
		printf("sum off all elemnts=%d\n",sum);
		return 0;
}
