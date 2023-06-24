// Informar um preço de um produto e calcular novo preço com desconto de 9%.

#include <stdio.h>
main()
{
	float preco,desconto,novopreco;
	
	printf("Entre com o preco do produto:");
	scanf("%f",&preco);
	
	desconto = preco * 9 / 100.0; // ou preco * 9.0/100
	novopreco = preco - desconto;
	
	printf("Preco com desconto de 9%% = %.2f\n",novopreco);
}

