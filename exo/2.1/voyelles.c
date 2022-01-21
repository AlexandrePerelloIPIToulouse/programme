#include <stdio.h>
int main(){
char lettre;

printf("Entrer une lettre : " ,lettre);
scanf("%c", &lettre);
if ((lettre== 'a') ||(lettre== 'e') ||(lettre== 'i') ||(lettre=='o') ||(lettre=='u') || (lettre=='y'))
	printf("Cette lettre est une voyelle : %c\n",lettre);
else
	printf("Cette lettre est une consonne : %c\n", lettre);
getchar();
return 0;
}
