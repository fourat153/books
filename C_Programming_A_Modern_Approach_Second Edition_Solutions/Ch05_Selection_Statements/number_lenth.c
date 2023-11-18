#include <stdio.h>
int main () 
{
int number ; 
scanf("%d", &number);
if (number>= 0 && number <= 9)
  printf("%d" , 1) ;
else if (number>9 && number <=99)
    printf("%d" , 2); 
else if (number>99 &&number <=999)
 printf("%d" , 3); 
else
{
    printf("%d" , 4); 
}


    
    return 0 ;
}