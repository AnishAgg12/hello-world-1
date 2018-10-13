#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the Number\t");
	scanf("%d",&a);
	prime(a);
	getch();
	return 0;
}
int prime(int b)
{
	int i=2;
	printf("Prime Factors of Number are\t");
	while(b!=0)
	{
		if(b%i==0)
		{
		
		printf("%d\t",i);
		b=b/i; }
		else
		i++;
	}
	return 0;
}
