#include <stdio.h>
int main () 
{
    char arr[6]; 
     fflush(stdin);
     gets(arr) ; 
    if (arr[2] == ':')
    {
        int hours; 
        hours = (((arr[0] - '0')  * 10) + (arr[1] - '0' )) - 12; 
        printf("%d:%c%c" , hours , arr[3],arr[4]);
    }
    else
    {
        printf("%c%c%c%c" , arr[0] , arr[1] , arr[2] , arr[3] );
    }

    return 0 ;
}