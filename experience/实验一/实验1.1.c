#include<stdio.h>
int main()
{
	char c1='C',c2='h',c3='i',c4='n',c5='a';
	c1+=4;
	c2+=4;
	c3+=4;
	c4+=4;
	c5+=4;
	putchar(c1);
	putchar(c2);
	printf("%c%c%c\n",c3,c4,c5);
	return 0;
}