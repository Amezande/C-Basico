#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float metros, pies;
    printf ("Ingrese el valor de metros: ");
    scanf ("%f", &metros);
    pies=metros/0.3048;
    printf ("Valor de pies: %g\n", pies);
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}
