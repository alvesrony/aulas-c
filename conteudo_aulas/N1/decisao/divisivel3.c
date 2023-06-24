// Faça um programa que receba um número inteiro e verifique se este número é divisível por 3 ou não.

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

