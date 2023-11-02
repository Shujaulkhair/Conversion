#include<stdio.h>
int main()
{
	printf("Enter seconds: ");
	int sec, h, m, s;
	scanf("%d", &sec);
	
	h= sec/3600;
	m= sec%3600/60;
	s= sec%3600%60;
	printf("Hr=%d, Min=%d, Sec=%d", h, m, s);	
	
}
