// Escreva um programa em leia um n�mero inteiro qualquer e calcule o inverso desse n�mero. Por exemplo: n�mero = 123, n�mero inverso = 321. 

#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int num, inv=0, n_dig, i=0, q, r, p=1;
	
	printf("Digite um n�mero a ser invertido: ");
	scanf("%d",&num);
	
	q=num;
	while(q) {
		q /= 10;
		i++;
	}
	
	n_dig=i;
	printf("Quantidade de d�gitos do n�mero = %d\n",i);
	i=1;

	while(i<n_dig) {
		p *= 10;
		i++;
	}
	
	printf("Maior pot�ncia de 10 = %d\n",p);
	q=num;
	
	while(q) {
		r=q%10;
		inv += p*r;
		p /= 10;
		q /= 10;
	}
	printf("O inverso de %d � = %d\n", num, inv);
}

