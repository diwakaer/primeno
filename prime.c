#include<stdio.h>
int main()
{
	printf("enter no to check\n");
	int n,i;
	scanf("%d",&n);
	int flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else
		flag=1;
	}
	if(flag==1)
	printf("prime no");
	else
	printf("not prime");
}
gcfvkb,kkhkhnlnl.
