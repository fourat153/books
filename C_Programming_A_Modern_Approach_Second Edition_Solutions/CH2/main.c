#include "my_string.h"
#include "stdio.h"

int main() {
 
  const char str1[20] = {"abcd"} ;
  char str2[20] = {"abcd"};

  char ret;

  my_strcmp(str2, str1);
  printf("%s", str2);

  return 0;
}