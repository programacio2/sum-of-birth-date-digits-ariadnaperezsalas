#include <stdio.h>
int main
{
	int dia, mes, año, suma;
	printf("Cual es tu dia de tu cumple?");
	scanf_s("%d", &dia);
	printf("Cual es tu mes de cumple en numeros");
	scanf_s("%d", &mes);
	printf("Cual es tu año de nacimiento");
	scanf_s("%d", &año);

	suma = dia + mes + año;
	printf("%d + %d + %d = %d", dia, mes, año, suma);

}