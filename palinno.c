
#include <stdio.h>
#include <conio.h>

int main()
{
    int n,t,s=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        s*=10;
        s+=(t%10);
        t/=10;
    }
    if(n==s)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}
