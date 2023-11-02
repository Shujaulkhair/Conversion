#include<stdio.h>
int main()
{
	printf("Enter seconds: ");
	int sec;
	scanf("%d", &sec);
	
	printf("Hr=%d ", sec/3600);
	printf("Min=%d ", sec%3600/60);
	printf("Sec=%d ", sec%3600%60);	
	
}
