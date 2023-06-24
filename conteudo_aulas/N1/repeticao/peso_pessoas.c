/*
Faça um programa que receba a idade e o peso de 10 pessoas, calcule e mostre: 
A) A quantidade de pessoas com mais de 90 quilos;
B) A média das idades das 10 pessoas.
C) A quantidade de pessoas maiores de idade e abaixo de 60 quilos.
*/

#include <stdio.h>
#include <locale.h>
#define P 3
main(){
	
	setlocale(LC_ALL,"");
	int idade, soma_idade=0, i=1, peso, q_pessoas, q_pessoas90=0, q_pessoasm60=0;
	float media;
	
	while(i<=P) {
	printf("Entre com a idade de uma pessoa: ");
	scanf("%d",&idade);
	
	printf("Entre com o peso de uma pessoa: ");
	scanf("%d",&peso);
	
	soma_idade+=idade;
	
	if(peso>90)
	{
		q_pessoas90++;
	}
	
	if(idade>18 && peso<60)
	{
		q_pessoasm60++;
	}
	q_pessoas++;
	i++;
	
	}
	
	media=soma_idade*1.0/q_pessoas;
	
	printf("A quantidade de pessoas com mais de 90 quilos é: %d\n",q_pessoas90);
	printf("A quantidade de pessoas maiores de idade e abaixo de 60 quilos é: %d\n",q_pessoasm60);
	printf("A média das idades das pessoas é: %.2f\n",media);
}

