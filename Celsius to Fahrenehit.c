#include<stdio.h>

int main()
{
	float c, f;
	printf("Enter Celsius: "); scanf("%f", &c);
	f = c*1.8+32;
	printf("%.1f%cC = %.1f%cF", c, 248, f, 248);
}
