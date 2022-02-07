#include <stdio.h>

int main(){
int x=1;
int i,j,res;
int hauteur=0;

	printf("Entrer le nombre de ligne : ");
	scanf("%d",&hauteur);

	for (i=-1 ;i<=hauteur ;i++)// pour i =1 et i<=hauteur alors pas de 1
	{
		
		 if (i<hauteur){
		 for (j=-1 ; j<i ; j++)// pas jusqu'à i
		{ 
		
		  printf("%d",i+1);// affiche le caractère +
		}  
		}
	 printf("\n");//retour à la ligne
	}



}

