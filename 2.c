#include<stdio.h>
int  si(int ,int,int);
int main()
{
     int a,t,p,s;
     printf("enter a amount:-");
     scanf("%d",&a);
     printf("enter a year:-");
     scanf("%d",&t);
     printf("enter a percent:-");
     scanf("%d",&p);
     s=si(a,p,t);
     printf("simple interest is  %d",s);
     return 0;
}
int si(int a,int p,int t)
{
     int s;
     s=(t*p*a/100);
     return s;
}
