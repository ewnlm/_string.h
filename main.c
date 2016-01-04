#include  <stdio.h>
#include  "_string.h"

int main() {
  char	str1[] = "Hello";
  char	str2[] = "World";
  char	str3[] = "";
  char	str4[] = "Yes";
  char	str5[] = "World";
  char	str6[] = "wORLD";
  char	str7[50]="String ";
  char	*ptr;

  printf("===strcat===\n");
  _str_cat(str1, str2);
  printf("-%s-\n", str1);
  printf("===strchr===\n");
  ptr = _str_chr(str2, 'W');
  printf("%zu\n", ptr-str2+1);
  ptr = _str_chr(str2, 'r');
  printf("%zu\n", ptr-str2+1);
  printf("===strcmp===\n");
  printf("Match: %d, %s %s\n", _str_cmp(str2, str5), str2, str5);
  printf("Match: %d, %s %s\n", _str_cmp(str2, str6), str2, str6);
  printf("===strcpy===\n");
  printf("Copy: %s, (%s + %s)\n", str7, _str_cpy(str7, "Duplication"), "duplication");

  return 0;
}
