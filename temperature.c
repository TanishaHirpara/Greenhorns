#include<stdio.h>
void main()
{
	float c,f;
	
	printf("temperature celsius=");
	scanf("%f",&c);
	
	f=c*9/5+32;
	
	printf("temperature Fahrenheit=%.2f",f);
}