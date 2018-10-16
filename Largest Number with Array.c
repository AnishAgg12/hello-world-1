#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("How many numbers are to be entered\?");
	scanf("%d",&n);
	int arr[n],x,y,i;
	for(i=0;i<=n-1;i++)
	{
		printf("Enter %dth Number",i+1);
		scanf("%d",&arr[i]);
	}
	y=arr[0];
	for(i=1;i<=n-1;i++)
	{
	    if(y>arr[i])
	    continue;
	    else
	    y=arr[i];
	}
	printf("%d is the largest number",y);
	getch();
	return 0;
}
