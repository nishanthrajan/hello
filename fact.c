
#include <stdio.h>
#include <conio.h>

int main()
{
    int num,fact=1,i;
    printf("enter the number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    	fact=fact*i;
    }
    printf("factorial of number is %d",fact);
  
    return 0;
}
