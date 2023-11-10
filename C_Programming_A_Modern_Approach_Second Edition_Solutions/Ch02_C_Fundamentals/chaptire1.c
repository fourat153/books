#include "chaptire1.h"
void bills(int bills) {
  int one = 20, tow = 10, three = 5, four = 1;
  one = bills / one;
  printf("20 $ is %d \n", one);
  bills %= 20;
  tow = bills / tow;
  printf("15 $ is %d \n", tow);
  bills %= 10;
  three = bills / three;
  printf("5 $ is %d \n", three);
  bills %= 5;
  four = bills / four;
  printf("1 $ is %d \n", four);
}