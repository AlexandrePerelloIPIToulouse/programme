#include <stdio.h>
int main(){
int a,b,c;
a=0,b=0,c=0;
printf("Saisir a : ");
scanf("%d", &a);

printf ("Saisir b : ");
scanf("%d", &b);

printf("Saisir c : ");
scanf("%d", &c);

if  (a>b && a>c){
printf("Le plus grand est %d\n",a);
}
else if (b>a && b>c){
printf("Le plus grand est %d\n",b);
}
else{
printf("Le plus grand est %d\n",c);
}

return 0;
}
