// Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � divis�vel por 3 ou n�o.

#include <stdio.h>
main()
{
	int num, resto;
	
	printf("Digite um numero divisivel por 3:");
	scanf("%d",&num);
	
	resto=num%3;
	
	if (resto==0)
	printf("O numero e divisivel por 3.");
	else
		printf("O numero nao e divisivel por 3.");
}

