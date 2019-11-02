#include <stdio.h>
#include <math.h>
#include <iostream>

int main()
{
	int i, a, k, s;
	k = 0;
	a = 2.1;
	for (i = 1; i <= 7; i++)
	{
		s = i + 2 / a + i;
		k++;
		printf("s=%d \n", s);
		printf("Vukonano %d raziv \n", k);
	}
}