#include "main.h"

/**
  * reverse_array - The main faunction
  * @a: parameter one
  * @n: parameter 2
  *
  */

void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
	swap = a[begin];
	a[begin] = a[end];
	a[end] = swap;
	begin++;
	end--;
	}
}
