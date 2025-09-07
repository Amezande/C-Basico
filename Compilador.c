#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Funciones para detectar elementos
bool contieneCadena(const char a[]);
bool contieneSaltoLinea(const char a[]);
bool contieneEspacio(const char a[]);
bool contieneTabulacion(const char a[]);
bool contienePrintf(const char a[]);
bool contieneParentesis(const char a[]);
bool contienePuntoYComa(const char a[]);

int main() {
	
    do
	{
    	char cad[200];

    	printf("Ingrese una linea de codigo C:\n");
    	fgets(cad, sizeof(cad), stdin);

    	printf("\n Analisis de la cadena:\n");

    	if (contieneCadena(cad)) {
        	printf(" Contiene una cadena entre comillas\n");
    	}

    	if (contieneSaltoLinea(cad)) {
        	printf(" Contiene un salto de linea (\\n)\n");
    	}

    	if (contieneEspacio(cad)) {
        	printf(" Contiene espacios\n");
    	}

    	if (contieneTabulacion(cad)) {
        	printf(" Contiene tabulacion (\\t)\n");
    	}

    	if (contienePrintf(cad)) {
        	printf(" Contiene la funcion 'printf'\n");
    	}

    	if (contieneParentesis(cad)) {
        	printf(" Contiene parentesis\n");
    	}

    	if (contienePuntoYComa(cad)) {
        	printf(" Contiene punto y coma ';'\n");
    	}

    	//return 0;
	} while (1);
}

// Detecta si hay comillas dobles (cadena)
bool contieneCadena(const char a[]) {
    return strchr(a, '"') != NULL;
}

// Detecta si hay \n
bool contieneSaltoLinea(const char a[]) {
    return strstr(a, "\\n") != NULL;
}

// Detecta espacios
bool contieneEspacio(const char a[]) {
    return strchr(a, ' ') != NULL;
}

// Detecta tabulaciones
bool contieneTabulacion(const char a[]) {
    return strstr(a, "\\t") != NULL;
}

// Detecta uso de printf
bool contienePrintf(const char a[]) {
    return strstr(a, "printf") != NULL;
}

// Detecta paréntesis
bool contieneParentesis(const char a[]) {
    return strchr(a, '(') != NULL || strchr(a, ')') != NULL;
}

// Detecta punto y coma
bool contienePuntoYComa(const char a[]) {
    return strchr(a, ';') != NULL;
}
