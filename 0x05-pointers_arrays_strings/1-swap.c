/**
 * swap_int - Swaps the value of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a
	*a = *b;
	*b = hold;
}
