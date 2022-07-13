/**
 * _strlen - Returns the length of a string
 * @s: string name
 *
 * Returns: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
