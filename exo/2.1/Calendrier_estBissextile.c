#include <stdio.h>
int main() {
int a=0;
printf("Saisir une Année :");
scanf("%d",&a);


if (((a %4 ==0) && (a %100 !=0)) || (a % 400==0))
{
 printf("%d true\n",a);
} 
else
{
	printf("%d  false\n",a);
}
return 0;
}
