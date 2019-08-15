#include <stdio.h>

int main()
{
    int n,k,i;
printf("enter the values of n and k:");
scanf("%d%d",&n,&k);
for(i=n;i<=k;i++)
{
	if(i%2==0)
	{
		printf("\n%d\n",i);
	}
}
}
