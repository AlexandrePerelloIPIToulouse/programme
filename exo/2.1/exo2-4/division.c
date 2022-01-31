#include <stdio.h> 
#include <math.h> 

float main () {
   float a,b,c,d;
   float s,r;
   float arrondi;
   a=0;
   b=0;
   printf("Calculatrice :\n\n");
   printf("Valeur de a : ");
   scanf("%f",&a);
   printf("Valeur de b : ");
   scanf("%f",&b);
   s=a/b;

   arrondi=ceilf(a/b);
   printf("Valeur arrondie de a/b %f\n",arrondi);
   printf("Valeur de a/b : %2f \n",s);

   r=fabsf(a-b);
   printf("valeur absolue de a-b: %f\n",r);
   return 0;
}
