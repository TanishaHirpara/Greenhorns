#include<stdio.h>
void main()
{
	int salary,hra,da,ta,gross;
	
	printf("SALARY=");
	scanf("%d",&salary);
	printf("HRA=");
	scanf("%d",&hra);
	printf("DA=");
	scanf("%d",&da);
	printf("TA=");
	scanf("%d",&ta);
	
	
	hra=salary*hra/100;
	da=salary*da/100;
	ta=salary*ta/100;
	
	gross=salary+hra+da+ta;
	
	printf("gross salary=%d",gross);
}
