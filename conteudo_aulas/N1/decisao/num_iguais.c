// Fa�a um programa que receba dois n�meros e mostre qual deles � o maior. Se forem iguais mostre uma mensagem �N�meros iguais�.

#include <stdio.h>
main()
{
	int n1, n2;
	printf("Digite dois numeros:");
	scanf("%d %d",&n1,&n2);
	
	if (n1>n2)
	printf("O primeiro numero e maior que o segundo.");
	if (n1<n2)
	printf("O segundo numero e maior que o primeiro.");
	if(n1==n2)
	printf("Numeros iguais.");
}

