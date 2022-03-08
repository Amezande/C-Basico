#include <studio.h>
#include <stdlib.h>
#include <math.h>

double Circulo(double  radio);
double Cuadrado(double  lado);
double Rectangulo(int base,  int altura);
double Triangulo(int base,  int altura);

double area=0;

int main(int argc, char**argv)
{
	int opc=1;
	float radio=0, lado=0;
	int base
	
	while(opc >= opc <=4)
	{
	 printf("\n\n Menú figuras geometricas");
	 printf("\n 1.Circulo");
	 printf("\n 2.Cuadrado");
	 printf("\n 3.Rectangulo");
	 printf("\n 4.Triangulo");
	 printf("\n Elige una opcion: ");
	 scanf("%d, & opc");
	 
	 switch(opc)
	 {
	 	case1:
	 	printf("Dame el valor del radio: ")
	 	scanf("%f, &radio");
	 	area = Circulo(radio);
	 break;
	 
	     case2:
	     printf("Dame el valor del lado: ")
	 	scanf("%f, &lado");
	 	area = Cuadrado(lado);
	 break;
	     
	     case3:
	     printf("Dame el valor de la altura: ")
	 	scanf("%f, &radio");
	 	printf("Dame el valor de la base: ")
	 	scanf("%f, &base");
	 	area = Rectangulo(altura, base);
	 break;
	 
	  case4:
	     printf("Dame el valor de la altura: ")
	 	scanf("%f, &radio");
	 	printf("Dame el valor de la base: ")
	 	scanf("%f, &base");
	 	area = Triangulo(altura, base);
	 break;
	 }
	 printf('\n\n El area calculada es: %f", area);
	}

	return (EXIT_SUCCESS);
}
	
	double Circulo(double radio)
	{
		double Pi = 3.1416;
		return Pi*radio*radio;
	}
	
	double Cuadrado(double lado)
	{
		return lado*lado;
	}
	
	double Rectangulo(int base, int alrura)
	{
	    return base*altura;
	}
	 
	 double Triangulo(int base, int altura)
	 {
	    return base*altura/2
	 }
	 	   
	 
	 