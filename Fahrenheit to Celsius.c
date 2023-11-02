#include<stdio.h>

int main()
{
	float f, c;
	printf("Enter Fahrenheit: "); scanf("%f", &f);
	c= (f-32)*5/9;
	printf("%.1f%cF = %.1f%cC", f,248, c,248);
}
