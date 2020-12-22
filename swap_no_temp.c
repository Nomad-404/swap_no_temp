#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter Num.A and Num.B");
	scanf("%d%d",&a,&b);
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 printf("Swapperd Numbers-A:%d  B:%d",&a,&b);
	 getch();	
}
