#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[20],i,j,n,temp;
	clrscr();
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Entered Array:");
	for(i=0;i<n;i++)
	{
		printf(" %d \t",ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("\n Arrar after Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d \t",ar[i]);
	}
	getch();
}


