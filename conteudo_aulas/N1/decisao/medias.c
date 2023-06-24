/*Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de uma das seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio:
Geom�trica:  3x * y * z
Ponderada:  x+2*y+3*z6
Harm�nica:  11x+1y+1z
Aritm�tica: x+y+z3
*/

#include <stdio.h>
#include <math.h>
main()
{
	int media;
	float x, y, z, multiplicacao, m_geometrica, m_ponderada, m_harmonica, m_aritmetica;
	
	printf("Digite tres numeros para calcular a media: \n");
	scanf("%f %f %f",&x ,&y ,&z);
	
	printf("Digite o tipo de media a ser calculada: \n Digite 1 para media geometrica. \n Digite 2 para media ponderada. \n Digite 3 para media armonica. \n Digite 4 para media aritmetica.\n");
	scanf("%d", &media);
	
	switch(media)
	{
		case 1:
			multiplicacao=x*y*z;
			m_geometrica=pow(x*y*z,1.0/3.0);
			printf("A media geometrica e: %.2f",m_geometrica);
			break;
		
		case 2:
			m_ponderada=(x+(2*y)+(3*z))/6;
			printf("A media ponderada e: %.2f",m_ponderada);
			break;
		
		case 3:
			m_harmonica=1/((1/x)+(1/y)+(1/z));
			printf("A media harmonica e: %.2f",m_harmonica);
			break;
		case 4:
			m_aritmetica=(x+y+z)/3;
			printf("A media aritmetica e: %.2f",m_aritmetica);
			break;
		default:
			printf("Numero de media invalido.");
			break;
	}
	return 0;
}

