#include <stdio.h>
int main() {
int a=0;
printf("Saisir un nombre entre 1 et 12 :");
scanf("%d",&a);

switch(a){
case 1:
  printf("Janvier\n");
      break;
case 2:
  printf("Février\n");
      break;
case 3:
  printf("Mars\n");
      break;
case 4:
  printf("Avril\n");
      break;
case 5:
  printf("Mai\n");
      break;
case 6:
  printf("Juin\n");
      break;
case 7:
  printf("Juillet\n");
      break;
case 8:
  printf("Août\n");
      break;
case 9:
  printf("Septembre\n");
      break;
case 10:
  printf("Octobre\n");
      break;
case 11:
  printf("Novembre\n");
      break;
case 12:
  printf("Décembre\n");
      break;
default :
  printf("\n");
      break;
}
return 0;
}
