// Escreva um programa que leia um número inteiro, calcule e mostre a soma de todos os divisores desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

#include <stdio.h>
main()
{
	int num, i=1, soma=0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	
	printf("Divisores de %d: ",num);
	while(i<num)
	{
		if(num%i==0)
		{
		printf("%d ", i);
		soma+=i;
		}
		i++;
	}
	printf("\nA soma dos numeros divisores de %d tirando ele mesmo e: %d", num, soma);
}



