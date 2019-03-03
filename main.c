#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*cal[])(int,int)=
{
	plus,
	minus,
	multiply,
	divided
};
char *operation[4]={'+','-','*','/'};
int main()
{
	int a, c, i=0;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	for(i;i<4;i++)
	{
		if(b==operation[i])
		
		{
			printf("%d %c %d = %d",a,b,c,cal[i](a,c));
			break;
		}
			
	}
}
