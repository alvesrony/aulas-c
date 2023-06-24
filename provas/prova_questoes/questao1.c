// Escreva um programa que leia vários números reais positivos, encontre o maior e o menor deles e mostre o resultado. O programa deve terminar a leitura quando o usuário entrar com um valor negativo (2 pontos)

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float num, num_menor, num_maior;
	
	printf("Entre com um número positivo ou digite um número negativo para encerrar o programa: ");
	scanf("%f", &num);
	
	num_menor=num;
	num_maior=num;
	
	while(num>=0)
	{
		if(num<=num_menor)
			num_menor=num;
		if(num>=num_maior)
			num_maior=num;
			
		printf("Entre com outro número: ");
		scanf("%f", &num);
	}
	
	printf("O maior número digitado é: %.2f\n", num_maior);
	printf("O menor número digitado é: %.2f\n", num_menor);
}

