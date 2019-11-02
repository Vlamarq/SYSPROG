#include <stdio.h>
#include <math.h>
#include <iostream>

int main()
{
	int a, k, i,s;
	k = 0;
	a = 2.1;
	for (i = 1; i <= 5; i++) 
	{
		s = 2 * pow(a, i) + 1;
		k++;
		printf("sum= %d \n", s);
		printf("Vukonano %d raziv \n", k);
	}
}
