#include<stdio.h>
#include<string.h>
struct address
{
	int street;
	char city[10];
	long int pcode;
};
struct student
{
	int rno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s={101,"raju",79.80,{"aditya","bvrm",534202}};
	printf("%d %s %f %s %s %ld",s.rno,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
	return 0;
}

