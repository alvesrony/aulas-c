// Fa�a um programa que leia 2 notas de um aluno, verifique se as notas s�o v�lidas e exiba na tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente, um valor entre 0 e 10. Caso a nota n�o possua um valor v�lido, este fato deve ser informado ao usu�rio e o programa termina.

#include <stdio.h>
main()
{
	float n1, n2, media;
	
	printf("Digite as duas notas entre 0 e 10:");
	scanf("%f %f",&n1,&n2);
	
	media=(n1+n2)/2;
	
	if (n1>=0 && n1<=10 && n2>=0 && n2<=10)
	printf("O valor da media e: %.2f + %.2f = %.2f\n",n1,n2,media);
	else
	printf("A nota nao posssui um valor valido.\n");

}

