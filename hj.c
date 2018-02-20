#include<stdio.h>
int main()
{
    int n,m,count=0,i,a,j,mul=1,sum=0;
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        m=m/10;
        count++;
    }
    m=n;
    for(i=1;i<=count;i++)
    {
        a=m%10;
        for(j=1;j<=count;j++)
        {
            mul=mul*a;
        }
        m=m/10;
        sum=sum+mul;
        mul=1;
    }
    if(n==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not a armstrong");
    }
    return 0;
}
