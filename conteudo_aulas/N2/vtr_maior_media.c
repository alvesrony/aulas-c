// Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a m�dia dos valores. 


#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 5
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i=0 , maior, menor, soma=0, cont=0;
	float media;
	int v[N];
	
	printf("Digite o primeiro elemento do vetor: ");
	
	printf("v[%d]=", i);
	scanf("%d", &v[i]);
	menor = v[i];
	maior = v[i];
	
	for(i=1; i<N; i++)
	{
		printf("Digite o pr�ximo elemento do vetor: ");
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
		
		if (v[i] >= maior)
			maior = v[i];
		if (v[i] <= menor)
			menor = v[i];
			
		cont++;
		
		soma+=v[i];
	}
	
	media=soma*1.0/cont;
	
	printf("\nVetor v = ");
	for(i=0; i<N; i++)
		printf("%d ", v[i]);
	
	printf("\n\nO menor elemento do vetor �: %d", menor);
	printf("\nO maior elemento do vetor �: %d", maior);
	printf("\nA m�dia dos elementos dos vetores �: %.2f", media);
}

