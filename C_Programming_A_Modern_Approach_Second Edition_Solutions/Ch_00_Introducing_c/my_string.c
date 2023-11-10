#include "my_string.h"
/**
 * @brief
 *
 * @param str
 * @param target
 * @param n
 * @return void*
 */
void *my_memchar(const void *str, int target, int n) {
  std_return_t ret = RET_Ok;
  if (NULL == str) {
    printf("%s", "error");
  } else {
    const void *temp = str;
    while (temp++) {
      if (temp == target) {
        return temp;
      }
    }
  }
}

/**
 * @brief
 *
 * @param str1
 * @param str2
 * @param n
 * @return int
 */
int my_memecmp(const void *str1, const void *str2, int n) {
  if ((NULL == str1) || (NULL == str2)) {

  } else {
    int res = 0;
    int str1_counter = 0, str2_counter = 0;
    for (int i = 0; i < n; i++) {
      str1_counter += (*(char *)str1);
      str2_counter += (*(char *)str2);
      str1++;
      str2++;
    }
    res = str1_counter - str2_counter;
    if (res == 0) {
      printf("str1 equal str2");
    } else if (res < 0) {
      printf("str1 less then str2");
    } else {
      printf("str2 less then str1");
    }
  }
}
/**
 * @brief
 *
 * @param dest
 * @param src
 * @param n
 * @return void*
 */

void *my_memecpy(void *dest, const void *src, int n) {
  if ((NULL == dest) || (NULL == src)) {

  } else {
    unsigned char *temp = (unsigned char *)src;
    while (n) {
      *(unsigned char *)dest++ = *temp++;
      n--;
    }
  }
  return dest;
}
/**
 * @brief
 *
 * @param str
 * @param c
 * @param n
 * @return void*
 */
void *my_memeset(void *str, char c, int n) {
  if (NULL == str) {
    printf("erro str is a null pointer");

  } else {
    while (n--) {
      *(char *)str++ = c;
    }
  }
  return str;
}
/**
 * @brief
 *
 * @param dest
 * @param src
 * @return char*
 */
char *my_strcat(char *dest, char *src) {
  if ((NULL == dest) || (NULL == src)) {
    printf("erro str is a null pointer");

  } else {

    while (1) {
      dest++;
      if (*dest == '\0') {
        while (*src != '\0') {
          *(unsigned char *)dest++ = *(unsigned char *)src++;
        }
        return dest;
      }
    }
  }
}
/**
 * @brief
 *
 * @param dest
 * @param src
 * @param n
 * @return char*
 */
char *my_nstrcat(char *dest, const char *src, int n) {
  if ((NULL == dest) || (NULL == src)) {
    printf("error str is a null pointer");

  } else {

    while (1) {
      dest++;
      if (*dest == '\0') {
        while (n--) {
          *(unsigned char *)dest++ = *(unsigned char *)src++;
        }
        return dest;
      }
    }
  }
}
/**
 * @brief
 *
 * @param str
 * @param c
 * @return char*
 */
char *my_strsrch(const char *str, char c) {
  std_return_t ret = RET_Ok;
  if (NULL == str) {
    printf("%s", "error");
  } else {
    const void *temp = str;
    while (temp++) {
      if (temp == c) {
        return temp;
      }
    }
  }
}
/**
 * @brief
 *
 * @param str1
 * @param str2
 * @return int
 */
int my_strcmp(const void *str1, const void *str2) {
  if ((NULL == str1) || (NULL == str2)) {

  } else {
    int res = 0;
    int str1_counter = 0, str2_counter = 0;
    while (((*(char *)str1 != '\0') && ((*(char *)str2 != '\0')))) {
      str1_counter += (*(char *)str1);
      str2_counter += (*(char *)str2);
      str1++;
      str2++;
    }

    res = str1_counter - str2_counter;
    if (res == 0) {
      printf("str1 equal str2");
    } else if (res < 0) {
      printf("str1 less then str2");
    } else {
      printf("str2 less then str1");
    }
  }
}
/**
 * @brief
 *
 * @param str1
 * @param str2
 * @param n
 * @return int
 */
int my_nstrcmp(const void *str1, const void *str2, int n) {
  if ((NULL == str1) || (NULL == str2)) {

  } else {
    int res = 0;
    int str1_counter = 0, str2_counter = 0;
    while (n--) {
      str1_counter += (*(char *)str1);
      str2_counter += (*(char *)str2);
      str1++;
      str2++;
    }

    res = str1_counter - str2_counter;
    if (res == 0) {
      printf("str1 equal str2");
    } else if (res < 0) {
      printf("str1 less then str2");
    } else {
      printf("str2 less then str1");
    }
  }
}
/**
 * @brief
 *
 * @param dest
 * @param src
 * @return char*
 */
char *my_strcpy(char *dest, const char *src) {}

/**
 * @brief
 *
 */
char *my_nstrcpy(char *dest, const char *src) {}
