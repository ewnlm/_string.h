#include  <stdio.h>
#include  "_string.h"

int main() {
  char	str1[] = "Hello";
  char	str2[] = "World";
  char	str3[] = "";
  char	str4[] = "Yes";
  char	*ptr;

  printf("===strcat===\n");
  _str_cat(str1, str2);
  printf("-%s-\n", str1);
  printf("===strchr===\n");
  ptr = _strchr(str2, 'W');
  printf("%p %p\n", ptr, str2);
  printf("%zu\n", ptr-str2+1);

  return 0;
}
