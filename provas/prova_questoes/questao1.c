// Escreva um programa que leia v�rios n�meros reais positivos, encontre o maior e o menor deles e mostre o resultado. O programa deve terminar a leitura quando o usu�rio entrar com um valor negativo (2 pontos)

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float num, num_menor, num_maior;
	
	printf("Entre com um n�mero positivo ou digite um n�mero negativo para encerrar o programa: ");
	scanf("%f", &num);
	
	num_menor=num;
	num_maior=num;
	
	while(num>=0)
	{
		if(num<=num_menor)
			num_menor=num;
		if(num>=num_maior)
			num_maior=num;
			
		printf("Entre com outro n�mero: ");
		scanf("%f", &num);
	}
	
	printf("O maior n�mero digitado �: %.2f\n", num_maior);
	printf("O menor n�mero digitado �: %.2f\n", num_menor);
}

