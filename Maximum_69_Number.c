#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int q,i=0,a[20],c=0,r;
    q=n;
    while(q!=0)
    {
        r=q%10;
        a[i]=r;
        i++;
        q=q/10;
        c=c+1;
    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}