// Faça um programa em C que leia dois valores inteiros e mostre o resultado de cada operação aritmética entre os dois.

#include <stdio.h>
main()
{
int n1, n2, soma, dif, prod, quoc, resto;

printf (" Digite dois numeros inteiros: ");
scanf ("%d %d", &n1, &n2);

soma = n1 + n2;
dif = n1 - n2;
prod = n1 * n2;
quoc = n1 / n2;
resto = n1 % n2;

printf (" A soma dos dois numeros e: %d\n ", soma );
printf (" A subtracao dos dois numeros e: %d\n ", dif );
printf (" O produto dos dois numeros e: %d\n ", prod );
printf (" A divisao dos dois numeros e: %d\n ", quoc );
printf (" o resto da divisao dos dois numeros e: %d\n ", resto );

}

