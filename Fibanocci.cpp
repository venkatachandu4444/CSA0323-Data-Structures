#include<stdio.h>
int main()
{
	int i,n,first=0,second=1,next;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			printf(" %d\n",first);
		}
		else if(i==2)
		{
			printf(" %d\n",second);
		}
		else
		{
			next=first+second;
			printf(" %d \n",next);
			first=second;
			second=next;
		}
	}
	
}
