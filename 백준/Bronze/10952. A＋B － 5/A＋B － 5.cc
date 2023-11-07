#include<stdio.h>

int main ()
{
	int a, b, i=0 ;
	
	while (1)
	{	
		scanf("%d %d", &a, &b);
		if (a==0 && b==0) break ; i++;
		printf("%d\n", a+b) ;
	}
	
	return 0 ;
}