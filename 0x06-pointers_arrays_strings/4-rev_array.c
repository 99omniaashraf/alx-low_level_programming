/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int q, z;

	for (q = 0; q < n--; q++)
	{
		z = a[q];
		a[q] = a[n];
		a[n] = z;
	}
}
