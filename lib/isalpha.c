#include <ctype.h>

BYTE isalpha(char c)
{
  if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return 1;
  else
    return 0;
}
