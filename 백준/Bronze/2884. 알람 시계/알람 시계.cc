#include<stdio.h>

int main()
{
    int h, m ;
    
    scanf("%d %d", &h, &m) ;
    
    if (m>=45 && m<=60) printf ("%d %d", h, m-45) ;
    else if (m<45) printf ("%d %d", (h+23)%24, m+15) ;
	    
    return 0 ;
    
}