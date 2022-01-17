#include <stdio.h>
#include <math.h>

int main()
{
 int a,b,h;
 a=0;
 b=0;
 printf("Valeur de a :");
 scanf(" %d" ,&a);
 printf("Valeur de b :");
 scanf(" %d",&b);
 h= sqrt((a*a) + (b*b));
 printf("L'hypothénuse vaut : %d ",h);
 getchar();

 return 0;

}
