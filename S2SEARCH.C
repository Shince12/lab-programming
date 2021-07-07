#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[20],i,j=1,val,n,pos=-1;
	clrscr();
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Entered Array:");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
	printf("Enter the element to be searched");
	scanf("%d",&val);
	while(j<=n)
	{
		if(ar[j]==val)
		{
			pos=j;
			printf("Element is fount at position %d",pos);
		}
		j=j+1;
	}
	if(pos==-1)
	{
		printf("Element not found");
	}
	getch();
}																										      )

