// Fa�a um programa em C que leia um conjunto de n�meros inteiros positivos, calcule e mostre a soma desses n�meros e sua m�dia. Admita que um valor negativo ser� utilizado como indicativo para final da leitura. Ex.: n�meros lidos = 1, 4, 5 => Soma=10 M�dia=10/3 = 3,333.

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num, i=1, soma=0, quant_num=0;
	float media;

	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);

	while(num>=0)
	{
		soma+=num;
		quant_num++;
		printf("Digite o pr�ximo n�mero inteiro: ");
		scanf("%d",&num);
	}
	media=soma*1.0/quant_num;
	printf("A soma dos n�meros digitados �: %d\n", soma);
	printf("A m�dia dos n�meros digitados �: %.2f\n", media);
}

