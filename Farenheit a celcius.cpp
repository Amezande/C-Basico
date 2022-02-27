#include <stdio.h>

int main (){
	
	float f, c; // decimales
	
	printf("ingrese los grados farenheit a convertir a celcius: ");
	scanf("%f", & f);
	
	c= (f - 32) * 5/9;
	
	printf("Los grados celcius son: %.2f \n\n", c);
	// %.2f para tomar solo dos decimales de los posibles de float
	
	return 0;
}
