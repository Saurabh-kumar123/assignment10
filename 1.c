#include<stdio.h>
float area(int);
int main()
{
     int r;
     float a;
     printf("enter a radius\n");
     scanf("%d",&r);
     a=area(r);
     printf("area of circle is %f",a);
     return 0;
}
 float area(int n)
 {
      return n*n*3.14;
 }
