// Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor.

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i=0 , maior, menor;
	int v[N];
	
	printf("Digite o primeiro elemento do vetor: ");
	
	printf("v[%d]=", i);
	scanf("%d", &v[i]);
	menor = v[i];
	maior = v[i];
	
	for(i=1; i<N; i++)
	{
		printf("Digite o próximo elemento do vetor: ");
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
		
		if (v[i] >= maior)
			maior = v[i];
		if (v[i] <= menor)
			menor = v[i];
	}
	printf("Vetor v = ");
	for(i=0; i<N; i++)
		printf("%d ", v[i]);
	
	printf("\nO menor elemento do vetor é: %d", menor);
	printf("\nO maior elemento do vetor é: %d", maior);
}

