/*
Faça um programa que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo: 
Cálculo do IMC = peso/(altura)2
IMC 		Classificação
< 18,5 		Abaixo do Peso 
18,6 - 24,9 	Saudável
25,0 - 29,9 	Peso em excesso 
30,0 - 34,9 	Obesidade Grau I 
35,0 - 39,9 	Obesidade Grau II (severa)
= 40,0 		Obesidade Grau III (mórbida)
*/

#include <stdio.h>
main()
{
	float imc, peso, altura;
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	
	if (imc<18.5)
	printf("Abaixo do peso: ");
	
	if (imc>18.6 && imc<24.9)
	printf("Saudavel: ");
	
	if (imc>25.0 && imc<29.9)
	printf("Peso em excesso: ");
	
	if (imc>30.0 && imc<34.9)
	printf("Obesidade grau 1: ");
	
	if (imc>35.0 && imc<39.9)
	printf("Obesidade grau 2 (severa): ");
	
	if (imc>=40.0)
	printf("Obesidade grau 3 (morbida): ");
}


