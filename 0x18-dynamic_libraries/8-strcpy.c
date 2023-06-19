#include "main.h"
/*
* swap_int -  copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* @*dest: pointer to destination array.
* @*src: pointer to source array.
* 
* Return: dest string.
* Author: Basil Bassey
*/
char *_strcpy(char *dest, char *src)
{
    int i=0, l=0, j;
    while(src[i++])
        l++;
    for(j = 0; j <= l; j++)
    {
        *(dest+j) = src[j];
    }
    return dest;
}
