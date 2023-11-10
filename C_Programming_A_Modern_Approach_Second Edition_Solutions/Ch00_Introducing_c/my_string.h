#ifndef _MY_STRING_
#define _MY_STRING_
/*****************include**********************/
#include <stdio.h>
/*****************MACROS_END************************/

/*****************MACROS_START**********************/

/*****************MACROS_END************************/

/*****************MACROS_FUNCTION_START*************/

/*****************MACROS_FUNCTION_END***************/

/*****************DATA_TYEPS_START******************/
typedef enum {
  RET_NOT_OK = 0,
  RET_Ok = 1,

} std_return_t;
#define NULL 0

/*****************DATA_TYEPS_END********************/

/*****************PROTOYPES_START*******************/
void *my_memchar(const void *str, int target, int n);
int my_memecmp(const void *str1, const void *str2, int n);
void *my_memecpy(void *dest, const void *src, int n);
void *my_memeset (void * str , char c , int n ) ; 
char *my_strcat (char * dest ,  char *src) ; 
char *my_nstrcat (char * dest , const char *src , int n ) ; 
char* my_strsrch ( const char * str , char c  ) ; 
int my_strcmp(const void *str1, const void *str2);
int my_nstrcmp(const void *str1, const void *str2 , int n);
char *strcpy(char *dest, const char *src);
char *nstrcpy(char *dest, const char *src);

/*****************PROTOYPES_END*********************/

#endif