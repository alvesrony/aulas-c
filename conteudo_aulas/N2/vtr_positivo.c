//Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor. 

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 3
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i, cont_n=0, soma=0;
	int v[N];
	
	for(i=0; i<N; i++)
	{
		printf("Digite o elemeto do vetor: ");
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
		
		if (v[i] < 0)
		{
			cont_n++;
		}
		
		if (v[i] > 0)
		{
			soma+=v[i];
		}
	}
	printf("\nVetor v = ");
	for(i=0; i<N; i++)
		printf("%d ", v[i]);
	
	printf("\n\nA quantidade de elementos negativos no vetor �: %d", cont_n);
	printf("\nA soma dos n�meros positivos do vetor �: %d", soma);
}

