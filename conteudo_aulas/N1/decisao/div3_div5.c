// Fa�a um programa para verificar se um determinado n�mero inteiro � divis�vel por 3 ou por 5, mas n�o simultaneamente pelos dois.

#include <stdio.h>
main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num%3==0 && num%5==0)
		printf("O numero E divisivel por 3 e por 5.");
				if (num%3==0 && num%5!=0)
					printf("O numero E divisivel por 3.");
				if (num%5==0 && num%3!=0)
					printf("O numero E divisivel por 5.");
				if (num%3!=0 && num%5!=0)
					printf("O numero nao E divisivel por 3 e nem por 5.");
}

