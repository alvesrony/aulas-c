// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):  
// • Homens: (72,7 * h) - 58 
// • Mulheres: (62, 1 * h) – 44,7

#include <stdio.h>
main()
{
	float h, peso_ideal;
	char  sexo;
	
	printf("Digite 'H' para Homem e 'M' para Mulher:\n ");
	
	scanf("%c", &sexo);
	
	fflush(stdin);
	printf("Digite sua altura:\n ");
	scanf("%f",&h);
	
	if (sexo=='H')
	{
	peso_ideal=(72.7*h)-58;
	printf("O seu peso ideal e: %.2f\n",peso_ideal);
	}
	if (sexo=='M')
	{
	peso_ideal=(62.1*h)-44.7;
	printf("O seu peso ideal e: %f\n",peso_ideal);
	}
	
}

