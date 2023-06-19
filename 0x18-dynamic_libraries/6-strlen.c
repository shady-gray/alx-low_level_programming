#include "main.h"
/*
* _strlen - returns the length of a string.
* @*s: pointer to string.
* 
* Return: On success, 0.
* Author: Basil Bassey
*/
int _strlen(char *s)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
        ;
    return i;
    
}
