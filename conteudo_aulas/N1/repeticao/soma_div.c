// Escreva um programa que leia um n�mero inteiro, calcule e mostre a soma de todos os divisores desse n�mero, com exce��o dele pr�prio. Ex: a soma dos divisores do n�mero 66 � 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

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



