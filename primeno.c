#include <stdio.h>

int main()
{
    int a,i,k=0;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            f=1;
            break;
        }
    }
    if(k==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
