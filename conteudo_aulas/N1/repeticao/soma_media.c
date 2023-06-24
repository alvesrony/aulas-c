// Faça um programa em C que leia um conjunto de números inteiros positivos, calcule e mostre a soma desses números e sua média. Admita que um valor negativo será utilizado como indicativo para final da leitura. Ex.: números lidos = 1, 4, 5 => Soma=10 Média=10/3 = 3,333.

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num, i=1, soma=0, quant_num=0;
	float media;

	printf("Digite um número inteiro: ");
	scanf("%d",&num);

	while(num>=0)
	{
		soma+=num;
		quant_num++;
		printf("Digite o próximo número inteiro: ");
		scanf("%d",&num);
	}
	media=soma*1.0/quant_num;
	printf("A soma dos números digitados é: %d\n", soma);
	printf("A média dos números digitados é: %.2f\n", media);
}

