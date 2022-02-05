#include <stdio.h>

int main(){
char x= '*';
int i,j;
int hauteur=0;

	printf("Entrer le nombre de ligne : ");
	scanf("%d",&hauteur);

	for (i=hauteur; i>=1 ; i--)
	{
		 for (j=1 ; j<=i ; j++)
		{ 
		  printf("%c",x);// affiche le caractère *
		}
	 printf("\n");//retour à la ligne
	}



}
