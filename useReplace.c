#include <stdio.h>
#include <string.h>

void useReplace(char str[], char find[], char replace[]) {
  char temp[100];
  int i, j, k, find_len, replace_len, str_len;

  find_len = strlen(find);
  replace_len = strlen(replace);
  str_len = strlen(str);



  for (i = 0; i <= str_len - find_len; i++) {
    k = 0;
    for (j = 0; j < find_len; j++) {
      if (str[i + j] != find[j]) {
        k = 1;
        break;
      }
    }
    if (k == 0) {
      for (j = 0; j < replace_len; j++)
        temp[i + j] = replace[j];

      i = i + find_len - 1;
      str_len = str_len - find_len + replace_len;
    } else
      temp[i] = str[i];
  }


  for (; i <= str_len; i++)
    temp[i] = str[i];

  temp[i] = '\0';

  for (i = 0; i <= str_len; i++)
    str[i] = temp[i];
}




int main() {
  char str[100] = "abcdef";
  char find[] = "cd";
  char replace[] = "XX";

  useReplace(str, find, replace);

  printf("Replaced string: %s\n", str);

  return 0;
}
