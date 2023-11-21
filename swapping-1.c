#include<stdio.h>
main()
{
//	using thrid variable
	int a,b,c;
	printf("swapping thrid variable\n");
	printf("value of a=");
	scanf("%d",&a);
	
	printf("value of b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("swap value a=%d\n",a);
	printf("swap value b=%d\n\n",b);
	
//	using two variable
	int p,r;
	printf("swapping two variable\n");
    printf("value of p=");
    scanf("%d",&p);
    
    printf("value of r=");
    scanf("%d",&r);
    
	p=p*r;
	r=p/r;
	p=p/r;
	
	printf("swap value p=%d\n",p);
	printf("swap value r=%d\n",r);
	
	
}