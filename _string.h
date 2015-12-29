char *_str_cat(char *des, char *src) {
  char *ret=des;
  while(*(++des));
  while((*(des++)=*(src++)));

  return ret;
}

char *_strchr(char *src, int character) {
  while(*(src++)!=character) {
    d++;
  }
  src--;
  return *(src)?(src):(NULL);
}
