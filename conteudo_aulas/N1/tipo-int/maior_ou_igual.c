// Ler um número e imprimir: maior que 20, igual a 20 ou menor que 20.

#include <stdio.h>
main()
	{
		
		float n1;
		
		printf("Digite o numero: \n");
		scanf("%f", &n1);
		
		if (n1>20)
			printf("Numero maior que 20.");
			
		if (n1<20) 
			printf("Numero menor que 20.");
			
		if (n1==20)
			printf("Numero igual a 20.");
			
	}

