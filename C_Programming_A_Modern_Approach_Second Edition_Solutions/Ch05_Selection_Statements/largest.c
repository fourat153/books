#include <stdio.h>
int main () 
{
  int a , b , c , d ; 
  scanf("%d%d%d%d" , &a,&b,&c,&d);
  int big1 , small1 , big2 , small2 ; 
  if (a > b )
  {
    big1 = a ; 
    small1 = b; 
  }
  else{
    big1 = b ; 
    small1 = a; 

  }
  if (c > d) 
  {
    big2 = c; 
    small2= d; 
  }
  else
  {
     big2 = d; 
    small2= c; 
  }
  if (big1> big2)
  {
    printf("%d " , big1);
  }
  else
  {
    printf("%d " , big2);
  }
  if(small1 > small2)
  {
    printf("%d ",small2);
  }
  else
  {
    printf("%d " , small1);
  }
    return 0 ;
}