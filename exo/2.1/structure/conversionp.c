#include <stdio.h>

int main(){
float bar =0;
float ps1=14.5038;
	
	printf("BAR\tPSI\n");
	for (float i=1 ; i <9 ; i=i+0.2){
	bar=i*ps1;

	printf("%.1f\t%.1f\n", i,bar);
	}






}
