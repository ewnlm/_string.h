#include  <stdio.h>
#include  "_string.h"

int main() {
  char	str1[] = "Hello";
  char	str2[] = "World";
  char	str3[] = "";
  char	str4[] = "Yes";

  printf("===strcat===\n");
  _str_cat(str1, str2);
  printf("-%s-\n", str1);


  return 0;
}
