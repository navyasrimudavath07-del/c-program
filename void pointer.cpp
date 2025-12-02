#include<stdio.h>
int main()
{
	int x=10;
	char a='x';
	void *ptr;
	ptr=&x;
	printf("value of ptr=%d",*(int*)ptr);
	ptr=&a;
	printf("\n value of ptr=%c",*(char*)ptr);
	return 0;
}
