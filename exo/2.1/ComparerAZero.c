#include <stdio.h>
int main(){
int a = 0;

printf("Saisir un nombre: ");
scanf("%d", &a);
if(a == 0) {
	printf ("a est nul\n");
}
else if   (a >0){
	printf("a est positif  1\n" );
}
else {
	printf("a est négatif -1\n");
}
return 0;
}
