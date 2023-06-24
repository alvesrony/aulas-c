/*
Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito. 
NOTA 		CONCEITO (ATÉ 20 FALTAS) 	CONCEITO (MAIS DE 20 FALTAS) 
9.0 até 10.0 		A 				B 
7.5 até 8.9 		B 				C 
5.0 até 7.4 		C 				D 
4.0 até 4.9 		D 				E 
0.0 até 3.9 		E 				E
*/

#include <stdio.h>
main()
{
	float nota, faltas;

	printf("Digite sua nota: ");
	scanf("%f",&nota);
	
	printf("Digite seu numero de faltas: ");
	scanf("%f",&faltas);
	
		if (nota>=9.0 && nota<=10 && faltas<=20)
			printf("Voce esta com conceito A.");
			
		if (nota>=9.0 && nota<=10 && faltas>20)
			printf("Voce esta com conceito B, com reducao.");
			
			
		if (nota>=7.5 && nota<=8.9 && faltas<=20)
			printf("Voce esta com conceito B.");
			
		if (nota>=7.5 && nota<=8.9 && faltas>20)
			printf("Voce esta com conceito C, com reducao.");
			
			
		if (nota>=5.0 && nota<=7.4 && faltas<=20)
			printf("Voce esta com conceito C.");
			
		if (nota>=5.0 && nota<=7.4 && faltas>20)
			printf("Voce esta com conceito D, com reducao.");
			
			
		if (nota>=4.0 && nota<=4.9 && faltas<=20)
			printf("Voce esta com conceito D.");
			
		if (nota>=4.0 && nota<=4.9 && faltas>20)
			printf("Voce esta com conceito E, com reducao.");
			
			
		if (nota>=0.0 && nota<=3.9 && faltas<=20)
			printf("Voce esta com conceito E.");
			
		if (nota>=0.0 && nota<=3.9 && faltas>20)
			printf("Voce esta com conceito E, com reducao.");
}

