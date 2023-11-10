/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
char date [11] ;
int number_of_items; 
int price ; 

int main()
{
    scanf("%d%d" , &number_of_items  , &price); 
    scanf ("%s" , date) ; 
    printf("item        unit        purchase\n");
    printf("            price       date\n");
    printf("%d          %d$          %s" ,   number_of_items , price , date  );
    

    
    return 0;
}
