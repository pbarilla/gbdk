#include <string.h>

/*
 * Compare strings (at most n bytes):
 *  s1>s2: >0
 *  s1==s2: 0
 *  s1<s2: <0
 */

BYTE strncmp(const char *s1, const char *s2, UBYTE n)
{
  while(n > 0 && *s1 == *s2++) {
    if(*s1++ == '\0')
      return 0;
    n--;
  }
  return (n == 0 ? 0 : *s1 - *--s2);
}
