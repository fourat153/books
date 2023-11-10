#include <stdio.h>
int main () 
{
   printf("enter a number..."); 
   int number ; 
   scanf("%d", &number); 
    printf("%d" , number%10);
    number /=10;
    printf("%d" , number%10);
    number /=10;
    printf("%d" , number%10);  

    
    return 0 ;
}