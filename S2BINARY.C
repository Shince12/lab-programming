#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[20],i,n,val,end,beg,mid,pos=-1;
	clrscr();
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements(sorted):");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEntered Array:");
	for(i=0;i<n;i++)
	{
		printf(" %d \t",ar[i]);
	}
	printf("\nEnter the element to be searched");
	scanf("%d",&val);
	beg=0;
	end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(ar[mid]==val)
		{
			pos=mid;
			printf("%d found at postion %d",val,pos);
			break;
		}
		else
		{
			if(ar[mid]>val)
				end=mid-1;
			else
				beg=mid+1;
		}
	}
	if(pos==-1)
	{
		printf("Element not found");
	}
	getch();
}