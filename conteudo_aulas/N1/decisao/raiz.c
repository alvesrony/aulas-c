// Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

#include <stdio.h>
#include <math.h>
main()
{
	float num;
	printf("Digite um numero positivo:");
	scanf("%f",&num);
	
	if (num>0)
	printf("A raiz quadrada de %.2f = %.2f\n",num,sqrt(num));
	else
	printf("O numero e invalido.");
}

