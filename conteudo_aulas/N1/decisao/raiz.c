// Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.

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

