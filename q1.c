#include<stdio.h>

main()
{
	char alphabet ='i';
	
	do
	{
		printf("%c\n",alphabet);
		alphabet +=4;
	}while(alphabet<='z');
}