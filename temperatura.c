#include <stdio.h>
float CtoF(float c){
	return (c*9.0/5.0)+32.0;
}
int main(void){
	int temperatura=25;
	printf("Temperature: %d degrees\n" ,temperatura);
	float conv_temp=CtoF(temperatura);
	printf("Fahrenheit: %.1f degrees\n", conv_temp);
	return 0;
}



	
