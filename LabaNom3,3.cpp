#include <stdio.h>
#include <math.h>
#include <iostream>

int main()
{
	float y, x, e;
	x = 8;
	do
	{
		y = abs(x - 9) / x + 4 * log(x + 2);
		x += 0.1;
		printf("x= %f \n", x);
	}
	while (x <= 9);
	{
	}
	


}