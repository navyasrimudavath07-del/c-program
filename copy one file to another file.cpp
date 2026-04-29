#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("null pointer.cpp","r");
	if(fs==NULL)
	{
		printf("file does not exist");
		exit(0);
	}
	ft=fopen("bubble sort.cpp","w");
	if(ft==NULL)
	{
		printf("unable to open file");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file copied succesfully");
	return 0;
}
