#include<stdio.h>

int main()
{
    int a, b ;
    
    scanf("%d %d", &a, &b) ;
    double result = (double)a/(double)b ;
    printf("%.91f", result) ;
    
    return 0 ;
    
}