#include <stdio.h>
#include <math.h>
#include <iostream>

int main()
{
	
	float a,x,y,c,d;
	x = 2.187;
	y = 4.934;
	c = 1.231;
	d = 1.152;
	
	if (x <= y)
	{
		a = log(sqrt(x)) + c * y;
	}
	else(x > y); {
		a = tan(x * y) + d * sqrt(x);
	}
	printf("a=%f\n",a);
	system("pause");

}
