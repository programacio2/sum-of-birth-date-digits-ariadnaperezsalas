#include <stdio.h>
int main
{
	int dia, mes, a�o, suma;
	printf("Cual es tu dia de tu cumple?");
	scanf_s("%d", &dia);
	printf("Cual es tu mes de cumple en numeros");
	scanf_s("%d", &mes);
	printf("Cual es tu a�o de nacimiento");
	scanf_s("%d", &a�o);

	suma = dia + mes + a�o;
	printf("%d + %d + %d = %d", dia, mes, a�o, suma);

}