#include<stdio.h>
int main()
{
	printf("Hello,I'm Jeevan");

	 int a,int b,temp;
        printf("Enter two num:");
        scan("%d %d",&a,&b);
        temp=a;
        a=b;
        b=temp;
        printf("After swap: a=%d,b=%d\n",a,b);


	return 0;
}	
