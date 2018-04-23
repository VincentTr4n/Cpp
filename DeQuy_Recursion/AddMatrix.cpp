#include<stdio.h>
int main()
{
    long **a,**b;
    long n,m;
    scanf("%ld%ld",&m,&n);
    a =  new long*[m+3];
    b = new long *[m+3];

    for(long i=1;i<=m;i++)
    {
      a[i] =  new long [n+3];
      b[i] =  new long [n+3];

    }
    for(long i=1;i<=m;i++)
    {
        for(long j=1;j<=n;j++)
        scanf("%ld",&a[i][j]);
     }
     for(long i=1;i<=m;i++)
    {
        for(long j=1;j<=n;j++)
        scanf("%ld",&b[i][j]);
     }
     for(long i=1;i<=m;i++)
    {
        for(long j=1;j<=n;j++)
        printf("%ld ",a[i][j]+b[i][j]);
        printf("\n");
     }

}
