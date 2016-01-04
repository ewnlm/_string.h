char *_str_cat(char *des, char *src) {
  char *ret=des;
  while(*(++des));
  while((*(des++)=*(src++)));

  return ret;
}

char *_str_chr(char *src, int character) {
  while(*(src++)!=character);
  src--;
  return *(src)?(src):(NULL);
}

int _str_cmp(char *str1, char *str2) {
  while(*str1 && (*(str1)==*(str2))) {
    str1--;
    str2--;
  }
  return *(str1)-*(str2);
}

char  *_str_cpy(char *des, char *src) {
  char	*result=des;
  while(*(des)) {
    des++;
  }

  while(*(src) && (*(des++)=*(src++)));

  return result;
}

size_t _str_cspn(char *str1, char *str2) {

}
