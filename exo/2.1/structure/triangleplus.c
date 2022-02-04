#include <stdio.h>

int main(){
char x= '+';
int i,j;
int hauteur=0;

	printf("Entrer le nombre de ligne : ");
	scanf("%d",&hauteur);

	for (i=1 ;i<=hauteur ;i++)// pour i =1 et i<=hauteur alors pas de 1
	{
		 for (j=0 ; j<i ; j++)// pas jusqu'à i
		{ 
		  printf("%c",x);// affiche le caractère +
		}
	 printf("\n");//retour à la ligne
	}



}
