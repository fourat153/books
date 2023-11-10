#include <stdio.h>
int main () 
{
  int data ; 
  scanf("%d" , &data);
  if (data < 3 ) 
  {
     printf("calm") ;
  } 
  else if (data >= 1 && data <= 3)
  {
   printf("light aire ") ;
  }
  else if (data >= 4 && data <= 27)
  { 
  printf("breeze") ;
  }
  else if (data >= 28 && data <= 47 ) 
  {
   printf("gale") ; 
  }
  else if (data >= 48 && data <= 63)
  {
  printf("storm");
  }
  else {
  printf("Hurrican");}

    return 0 ;
}