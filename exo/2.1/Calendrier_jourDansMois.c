#include <stdio.h>
int main() {
int a=0;
int b=0;
printf("Saisir une Année :");
scanf("%d",&b);

printf("Saisir un mois : ");
scanf("%d",&a);

switch(a){
 case 1:
  printf("31\n");
  break;
 case 2:
	if (((b %4==0) && (b %100 !=0)) || (b % 400==0))
	{
	 printf("29\n");
	}
	else {
	printf("28\n");
	}
   break;
 case 3:
  printf("31\n");
  break;
 case 4:
  printf("30\n");
  break;
 case 5:
  printf("31\n");
  break;
 case 6:
  printf("30\n");
  break;
 case 7:
  printf("31\n");
  break;
 case 8:
  printf("31\n");
  break;
 case 9:
  printf("30\n");
  break;
 case 10:
  printf("31\n");
  break;
 case 11:
  printf("30\n");
  break;
 case 12:
  printf("31\n");
  break;
 default:
  printf("\n");
}
}
