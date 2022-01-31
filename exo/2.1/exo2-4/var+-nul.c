#include <stdio.h>

int main () {
int a=0;

printf("saisie de a :");
scanf("%d",&a);
if (a<0)
 printf("Variable negative \n");
else
	if (a > 0)
  	 printf ("Variable positive \n");
	else
   	printf ("Variable nul \n");
return 0;
}
