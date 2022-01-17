#include <stdio.h> 
#include <math.h> 

int main () {
   int a,b;
   int s;
   int u;
   int v;
   a=0;
   b=0;

   printf("Calculatrice :\n\n");
   printf("Valeur de a : ");
   scanf("%d",&a);
   printf("\n");
   printf("Valeur de b : ");
   scanf("%d",&b);
   s=a+b;
   printf("Valeur de a+b : %d\n",s);
   u=a-b;
   printf("\n Valeur de a-b : %d\n",u);
   v=a*b;
   printf("\n Valeur de a*b : %d\n",v);

   return 0;
}
