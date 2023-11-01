/*Read a baby age in no of days and find the baby
age in years, months, weeks and days. */

#include<stdio.h>

void main()
{
	printf("Enter the Baby's age in days: ");
	int age, y1, y2, m1, m2, w1, d2;
	scanf("%d", &age);
	
	y1= age/365;
	y2= age%365;
	
	m1= y2/30;
	m2= y2%30;
	
	w1= m2/7;
	d2= m2%7;
	
	
	printf("Baby's age is: Year=%d, Months=%d Weeks=%d Days=%d", y1, m1, w1, d2);
	
}
