#include<stdio.h>
#include<string.h>

int main ()
{
	char a[1004] ;
	int b ;
	
	scanf("%s", a) ;
	scanf("%d", &b) ;
	
	printf("%c", a[b-1]) ;
}
