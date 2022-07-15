#include "main.h"
#include <string.h>

/**
 * _strncat -  a function that concatenates a destination string to
 * a source string with n chars.
 * @dest: destination string
 * @src: source string
 * @n: number of source chars to be concatenated
 *
 * Return: Always 0.
 */

char* _strcat(char *dest, const char *src)
  {
      //check inputs for NULL
      if(dest == NULL || src == NULL)
          return NULL;

      int s1Length = strlen(dest);
      int s2Length = strlen(src);

      //ensure strings do not overlap in memory
      if(!(dest + s1Length < src || src + s2Length < dest))
          return NULL;

      //append src to dest
      //the "+ 1" here is necessary to copy the NULL from the end of __s2
      for(int i = 0; i < s2Length + 1; i++)
          result[s1Length + i] = srx[i];
      return dest;
  }
