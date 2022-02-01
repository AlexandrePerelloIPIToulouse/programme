#include <stdio.h>
#include <math.h>

int main() {
int a = 0;
float b=0;
int c;
float c1;
	printf("Saisir une valeur : ");
	scanf("%d",&a);

	for (int i = 0; i < 11 ; i++){
	 c=a+i;
	 printf("%d + %d = %d\n",a,i,c);
	} 

	printf("Saisir une valeur : ");
        scanf("%d",&a);

        for (int i = 0; i < 11 ; i++){
         c=a-i;
         printf("%d - %d = %d\n",a,i,c);
        } 

	printf("Saisir une valeur : ");
        scanf("%d",&a);

        for (int i = 0; i < 11 ; i++){
        c=a*i;
         printf("%d x %d = %d\n",a,i,c);
        } 

	printf("Saisir une valeur : ");
        scanf("%f",&b);

        for (float i = 0; i < 11 ; i++){
        c1=b/i;
         printf("%f / %f = %f\t\n",b,i,c1);
        } 

}










