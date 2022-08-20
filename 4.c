#include<stdio.h>
void pfn(int);
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     pfn(n);
     return 0;
}
 void pfn(int a)
  {
       int i;
       for(i=1;i<=a;i++)
          printf("%d ",i);
  }
