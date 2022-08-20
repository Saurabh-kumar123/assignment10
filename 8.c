#include<stdio.h>
int fact(int n)
{
     int i,f=1;
     for(i=1;i<=n;i++)
          f=f*i;
     return f;
}
int comb(int n,int r)
{
     return fact(n)/fact(n-r);
}
int main()
{
     int n,r;
     printf("enter a number of n item and selection time\n");
     scanf("%d%d",&n,&r);
     printf("Number of permutation is %d",comb(n,r));
     return 0;
}

