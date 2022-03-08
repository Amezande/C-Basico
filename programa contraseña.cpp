#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{
	
	char a[20];
	char b[20];
    printf("\n");
	printf("por favor introduzca la contraseña para continuar\n");
	printf("\n");
	int i = 0;

	while (a[i] != 13)
	{
		a[i] = getch();
		if (a[i] > 32 && i < 20)
		{
			putchar('*');
			i++;
		}
		else if (a[i] == 8 && i > 0)
		{
			putchar(8);
			putchar(' ');
			putchar(8);
			i--;
		}
	}

	a[i] = '\0';
	if(!strcmp(a, "amacende"))
		printf("\n Acceso permitido,");
		   else 
		   printf("\n Acceso denegado");
	   if ()

		   getch();
		   
		   printf("\n Bienevenido usuario soy Gibbion ");
		   printf("\n¿Cual es tu nombre?");
	       scanf("%s",b);
		   printf("\n"); 
		   printf("\n\n Hola %s",b);
		   printf(" Soy Gibbion tu asistente encargado del programa");
	   }

