// Escreva um programa em leia um número inteiro qualquer e calcule o inverso desse número. Por exemplo: número = 123, número inverso = 321. 

#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int num, inv=0, n_dig, i=0, q, r, p=1;
	
	printf("Digite um número a ser invertido: ");
	scanf("%d",&num);
	
	q=num;
	while(q) {
		q /= 10;
		i++;
	}
	
	n_dig=i;
	printf("Quantidade de dígitos do número = %d\n",i);
	i=1;

	while(i<n_dig) {
		p *= 10;
		i++;
	}
	
	printf("Maior potência de 10 = %d\n",p);
	q=num;
	
	while(q) {
		r=q%10;
		inv += p*r;
		p /= 10;
		q /= 10;
	}
	printf("O inverso de %d é = %d\n", num, inv);
}

