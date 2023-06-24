#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

// struct data
typedef struct
{
  int dia,mes,ano;
}DATA;

// struct para livros
typedef struct livro {
    char nome[100];
    char autores[100];
    char editora[100];
    int ano;
    int edicao;
    char assunto[100];
    int quantidadetotal;
    int quantidadeemprestados;
    DATA dataemprestimo;
    DATA datadevolucao;
} LIVRO;

void ler(LIVRO *ptr)
{
	printf("Nome do livro: ");
    scanf(" %[^\n]%*c", (*ptr).nome);

    printf("Autor(es): ");
    scanf(" %[^\n]%*c", (*ptr).autores);

    printf("Editora: ");
    scanf(" %[^\n]%*c", (*ptr).editora);

    printf("Ano: ");
    scanf("%d", &(*ptr).ano);
    getchar();

    printf("EdiÁ„o: ");
    scanf("%d", &(*ptr).edicao);
    getchar();

    printf("Assunto: ");
    scanf(" %[^\n]%*c", (*ptr).assunto);

    printf("Quantidade total de livros disponÌveis: ");
    scanf("%d", &(*ptr).quantidadetotal);
    getchar();

    printf("Quantidade de livros emprestados: ");
    scanf("%d", &(*ptr).quantidadeemprestados);
    getchar();

    printf("Data de emprÈstimo: ");
    scanf("%d %d %d", &(*ptr).dataemprestimo.dia, &(*ptr).dataemprestimo.mes, &(*ptr).dataemprestimo.ano);
    getchar();

    printf("Data de devoluÁ„o: ");
    scanf("%d %d %d", &(*ptr).datadevolucao.dia, &(*ptr).datadevolucao.mes, &(*ptr).datadevolucao.ano);
    getchar();	
}

void mostrar(LIVRO x)
{
	printf("\n\nNome: %s\n",x.nome);
	printf("Autor(es): %s\n",x.autores);
	printf("Editora: %s\n",x.editora);
	printf("Ano: %d\n",x.ano);
	printf("EdiÁ„o: %d\n", x.edicao);
	printf("Assunto: %s\n", x.assunto);
	printf("Quantidade total de livros disponÌveis: %d\n", x.quantidadetotal);
	printf("Quantidade de livros emprestados: %d\n", x.quantidadeemprestados);
	printf("Data de emprÈstimo: %d/%d/%d\n", x.dataemprestimo.dia, x.dataemprestimo.mes, x.dataemprestimo.ano);
	printf("Data de devoluÁ„o: %d/%d/%d\n", x.datadevolucao.dia, x.datadevolucao.mes, x.datadevolucao.ano);
}



//////////////////////////////////////////////// op√ß√£o 1 ////////////////////////////////////////////////////
//fun√ß√£o para criar arquivo bin√°rio
void criar_arquivo(char *nome_arquivo)
{
	FILE *arquivo = fopen(nome_arquivo, "wb");
	if(arquivo == NULL)
	{
		printf("Erro ao criar o arquivo.\n");
	}
	fclose(arquivo);
    printf("Arquivo criado com sucesso.\n");
}

//fun√ß√£o para ler o arquivo completo
void ler_arquivo_inteiro(char *nome_arquivo, LIVRO *x)
{
    FILE* arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL)
	{
        printf("Erro ao abrir o arquivo.\n");
    }
    
    // Loop para ler todos os registros do arquivo
    while (fread(x, sizeof(LIVRO), 1, arquivo) == 1)
	{
        mostrar(*x); // Exibe o registro lido
    }
    
    fclose(arquivo);
}

// l√™ os livros j√° gravados no arquivo e adiciona-os no vetor de livros
void ler_gravar_arquivo(char *nome_arquivo, LIVRO *vtr_livros, int *num_livros, int max_livros)
{
    FILE* arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL)
	{
        printf("Erro ao abrir o arquivo.\n");
    } else {
		    // Loop para ler todos os registros do arquivo e adicionar ao vetor de livros
		    while ((*num_livros) < max_livros && fread(&vtr_livros[*num_livros], sizeof(LIVRO), 1, arquivo) == 1)
			{
		        (*num_livros)++;
		    }
		    
		    fclose(arquivo);
		    printf("Arquivos recuperados com sucesso.\n");
		}
    
    
}


//////////////////////////////////////////////// op√ß√£o 2: inserir novo registro ////////////////////////////////////////////////


// Func√£o para mostrar os livros no vetor
void mostra_livros(LIVRO *livros, int num_livros)
{
	int i;
	system("cls");
    printf("\nLista de livros:\n\n");
    for (i = 0; i < num_livros; i++)
	{
        printf("Livro %d:", i);
        mostrar(livros[i]);
        printf("\n\n");
    }
}


// Fun√ß√£o para inserir livros no vetor
void inserir_livro(LIVRO *vtr_livros, int *num_livros, int qtd_livros)
{
    int i, j, k=0;
    
    if(*num_livros==0)
    {
	    i=qtd_livros - *num_livros; // calcula quantos livros ainda podem ser adicionados
	    
	    if (i > 0) 
		{
	        j = qtd_livros;
	
	        if (j <= i) 
			{
	            for (k = 0; k < j; k++)
				{
	                printf("\nLivro %d:\n", *num_livros + k);
	                LIVRO novo_livro;
	                ler(&novo_livro);
	                vtr_livros[*num_livros + k] = novo_livro;
	            }
	
	            *num_livros += j;
				
	            printf("%d livro(s) inserido(s) com sucesso no vetor.\n", j);
	            printf("\n\n");
	
	            mostra_livros(vtr_livros, *num_livros); // Imprime todos os livros do vetor
	        }
		} else {
	        printf("Limite m·ximo de livros atingido.\n");
	    	}
	} else {
		printf("J· existem %d livros no vetor.\n", *num_livros);
		printf("Adicionando mais %d livros.\n", qtd_livros);
	
		j = qtd_livros;
	
		    for (k = 0; k < j; k++)
				{
		        printf("\nLivro %d:\n", *num_livros + k);
		        LIVRO novo_livro;
		        ler(&novo_livro);
		        vtr_livros[*num_livros + k] = novo_livro;
		        }
		        *num_livros += j;
		        printf("%d livro(s) inserido(s) com sucesso no vetor.\n", j);
		        printf("\n\n");
		        
		        mostra_livros(vtr_livros, *num_livros); // Imprime todos os livros do vetor
		}
    
}

//////////////////////////////////////////////// op√ß√£o 3: Colocar em ordem alfab√©tica por nome ////////////////////////////////////////////////

// Fun√ß√£o de compara√ß√£o para ordena√ß√£o por nome
int comparar_por_nome(const void *a, const void *b)
{
    LIVRO *livro1 = (LIVRO *)a;
    LIVRO *livro2 = (LIVRO *)b;
    return strcmp(livro1->nome, livro2->nome);
}
/*
 const void * √© um tipo gen√©rico de ponteiro, o 'const' indica que o ponteiro aponta uma vari√°vel na qual o valor n√£o deve se modificado.
 'void' indica que o tipo apontado n√£o √© especificado.
 O (LIVRO *) √© utilizado para converter os ponteiros gen√©ricos no tipo LIVRO * PARA PODER SER COMPARADO CORRETAMENTE.
*/



//////////////////////// op√ß√£o 4: Alterar informa√ß√µes do registro //////////////////////////////////////

void alterar_livro(LIVRO *vtr_livros, int num_livros, char *nome_livro)
{
    int i;
    for (i = 0; i < num_livros; i++)
	{
        if (strcmp(vtr_livros[i].nome, nome_livro) == 0)// verifica o nome do livro a ser alterado
		{
            printf("Digite as novas informaÁıes para o livro %s:\n", vtr_livros[i].nome);
            ler(&vtr_livros[i]); // l√™ os novos dados do livro
            system("cls");
			printf("InformaÁıes do livro alteradas com sucesso.\n");
        } else {
    		printf("Livro com o nome '%s' n„o encontrado.\n", nome_livro);
		}
    }
    if (num_livros == 0)
    {
    	printf("N„o existem livros no vetor.\n");
	}
    
}

//////////////////////// op√ß√£o 5: Excluir registro //////////////////////////////////////

void excluir_livro(LIVRO *vtr_livros, int *num_livros, char *nome_livro)
{
    int i, j, encontrado=0;
    
    for (i = 0; i < *num_livros; i++)
	{
        if (strcmp(vtr_livros[i].nome, nome_livro) == 0)
		{
            encontrado = 1;
            // Move todos os livros √† frente do livro a ser exclu√≠do uma posi√ß√£o para tr√°s
            for (j = i; j < *num_livros - 1; j++)
			{
                vtr_livros[j] = vtr_livros[j + 1];
            }
            (*num_livros)--;
            printf("Livro '%s' excluÌdo com sucesso.\n", nome_livro);
            break;
        }
    }
    
    if (!encontrado)
	{
        printf("Livro com o nome '%s' n„o encontrado.\n", nome_livro);
    }
}

//////////////////////// op√ß√£o 6: Procurar informa√ß√µes por nome ou outro campo do registro //////////////////////////////////////

void buscar_livro(LIVRO *vtr_livros, int num_livros, int valor_buscar, char *buscar)
{
    int i, encontrado = 0;

    for (i = 0; i < num_livros; i++)
    {
        // Verifica se o "buscar" √© igual ao nome ou a outro
        switch (valor_buscar)
        {
        	
            case 1: // Nome
            
                if (strcmp(vtr_livros[i].nome, buscar) == 0)
                    encontrado = 1;
                    
                break;
                
            case 2: // Autor(es)
            
                if (strcmp(vtr_livros[i].autores, buscar) == 0)
                    encontrado = 1;
                    
                break;
                
            case 3: // Editora
            
                if (strcmp(vtr_livros[i].editora, buscar) == 0)
                    encontrado = 1;
                    
                break;
                
            case 4: // Assunto
            
                if (strcmp(vtr_livros[i].assunto, buscar) == 0)
                    encontrado = 1;
                    
                break;
                
            default:
            	
                printf("Campo de busca inv·lido.\n");
                
        }
        
        if (encontrado)
        {
            mostrar(vtr_livros[i]);
            encontrado = 0;
        }
        
    }

    if (!encontrado)
    {
        printf("Nenhum livro encontrado para o campo de busca fornecido: %s\n", buscar);
    }
}

//////////////////////// op√ß√£o 7: Gravar registros no arquivo bin√°rio //////////////////////////////////////

void gravar_livros(LIVRO *vtr_livros, int num_livros, char *nome_arquivo)
{
    FILE *arquivo = fopen(nome_arquivo, "wb");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    
    // Grava cada livro no arquivo
    fwrite(vtr_livros, sizeof(LIVRO), num_livros, arquivo);

    fclose(arquivo);
    printf("livros gravados com sucesso no arquivo.\n");
}

//////////////////////// op√ß√£o extra: listar os livros mais solicitados e quantas vezes foi alugado //////////////////////////////////////

void livros_mais_emprestados(LIVRO *vtr_livros, int num_livros)
{
    int i, j;
	
	// Confere se existem livros no vetor
	if (num_livros == 0)
	{
		printf("N„o existem livros no vetor.\n");
	} else {
			// Ordenar os livros pelo n√∫mero de empr√©stimos
		    for (i = 0; i < num_livros - 1; i++)
			{
		        int min_index = i;
		        for (j = i + 1; j < num_livros; j++)
				{
		            if (vtr_livros[j].quantidadeemprestados < vtr_livros[min_index].quantidadeemprestados)
					{
		                min_index = j;
		            }
		        }
		        // Trocar o livro atual com o livro de menor quantidade de empr√©stimos
		        if (min_index != i)
				{
		            LIVRO temp = vtr_livros[i];
		            vtr_livros[i] = vtr_livros[min_index];
		            vtr_livros[min_index] = temp;
		        }
		    }
		
		    // Exibir os livros em ordem decrescente de quantidade de empr√©stimos
		    printf("Livros mais emprestados (em ordem decrescente):\n");
		    for (i = num_livros - 1; i >= 0; i--)
			{
		        mostrar(vtr_livros[i]);
		        printf("N˙mero de emprÈstimos: %d\n\n", vtr_livros[i].quantidadeemprestados);
		    }
		}

}

int main()
{
	
	setlocale(LC_ALL,"portuguese");
	
	int i, opcao, opcao_arquivo, t, qtd_livros, valor_buscar;
	char nome_arquivo[100];
	char nome_livro[100];
	char buscar[100];
	LIVRO x;
	
	
	//vetor de livros
	int num_livros = 0, max_livros = 100;
	LIVRO vtr_livros[max_livros];
	
	do
	{
		
		printf("\n----Opcoes:----\n");
        printf("1. Criar arquivo para escrita bin·ria ou abrir arquivo prÈ-existente para leitura;\n");
        printf("2. Inserir novo registro;\n");
        printf("3. Colocar em ordem alfabÈtica por nome;\n");
        printf("4. Alterar informaÁıes do registro;\n");
        printf("5. Excluir registro;\n");
        printf("6. Procurar informaÁıes por nome ou outro campo do registro;\n");
        printf("7. Gravar registros no arquivo bin·rio;\n");
        printf("8. Listar os livros mais solicitados, quantas vezes foi alugado;\n");
        printf("9. Fechar arquivo e sair.\n\n");
		
        printf("Digite sua opÁ„o: ");
        scanf("%d", &opcao);
        
        if(opcao>9 || opcao<1)
        {
        printf("Digite uma opÁ„o v·lida:\n ");
		}
        
		switch(opcao)
		{
			case 1:
			system("cls");	
				do
				{
				printf("\n\n----Opcoes:----\n");
        		printf("1. Criar arquivo bin·rio;\n");
        		printf("2. Ler o arquivo completo;\n");
        		printf("3. Recuperar livros do arquivo e adiciona-los ao vetor de livros;\n");
        		printf("4. Voltar ao menu anterior;\n");
				printf("\nDigite a opÁ„o desejada: ");
    			scanf("%d", &opcao_arquivo);
        		
    			if(opcao_arquivo == 1)
    			{
    				//Criar e abrir arquivo bin√°rio
					printf("\n\nDigite o nome do arquivo: ");
    				scanf("%s", nome_arquivo);
					criar_arquivo(nome_arquivo);
				} else
    			if(opcao_arquivo == 2)
				{
					printf("\n\nDigite o nome do arquivo: ");
    				scanf("%s", nome_arquivo);
					ler_arquivo_inteiro(nome_arquivo, &x);
				}
				if(opcao_arquivo == 3)
				{
					printf("\n\nDigite o nome do arquivo: ");
    				scanf("%s", nome_arquivo);
    			
					// Recuperar os dados do arquivo e adicionar ao vetor de livros
        			ler_gravar_arquivo(nome_arquivo, vtr_livros, &num_livros, max_livros);
       			 
				}
				}while (opcao_arquivo != 4);
				system("cls");					
				break;
				
			case 2:
			system("cls");		
				if(num_livros == 0)
				{
					printf("\nDigite o n˙mero de livros para serem criados: ");
                	scanf("%d", &qtd_livros);
                	inserir_livro(vtr_livros, &num_livros, qtd_livros); // insere livros no vetor.
				} else {
					printf("\n„o existem livros no vetor.\n ");
					printf("\nDigite o n˙mero de livros para serem criados: ");
                	scanf("%d", &qtd_livros);
					inserir_livro(vtr_livros, &num_livros, qtd_livros); // Insere mais livros no vetor.
				}
				
				break;
				
			case 3:
			system("cls");		
		        qsort(vtr_livros, num_livros, sizeof(LIVRO), comparar_por_nome); // ordena os Livros em ordem alfab√©tica no vetor.
		        printf("Livros ordenados por nome em ordem alfabÈtica.\n");
		        mostra_livros(vtr_livros, num_livros); // Imprime todos os livros do vetor.
		        
		        break;
		        
		    case 4:
		    system("cls");		
		    	printf("Digite o nome do livro que deseja alterar as informaÁıes: ");
		    	fflush(stdin);
        		scanf("%[^\n]%*c", nome_livro);
        		alterar_livro(vtr_livros, num_livros, nome_livro);
			    
			    break;
			    
			case 5:
			system("cls");		
				printf("Digite o nome do livro que deseja excluir: ");
			    fflush(stdin);
			    scanf("%[^\n]%*c", nome_livro);
			    excluir_livro(vtr_livros, &num_livros, nome_livro);
				
				break;
				
			case 6:
			system("cls");		
				printf("\n\n----OpÁıes:----\n");
        		printf("1. Nome;\n");
        		printf("2. Autor;\n");
        		printf("3. Editora;\n");
        		printf("4. Assunto;\n");
				
				printf("\nDigite o campo de busca (nome, autor, editora, assunto): ");
				scanf("%d", &valor_buscar);
				
				printf("Digite o nome que deseja buscar: ");
                scanf(" %[^\n]%*c", buscar);
                
                buscar_livro(vtr_livros, num_livros, valor_buscar, buscar);
                
                break;
                
            case 7:
            system("cls");		
            	printf("\n\nDigite o nome do arquivo: ");
    			scanf("%s", nome_arquivo);
            	gravar_livros(vtr_livros, num_livros, nome_arquivo);
            	
            	break;
            	
            case 8:
            system("cls");		
            	livros_mais_emprestados(vtr_livros, num_livros);
            	
            	break;
            
            case 9:
            system("cls");		
            	printf("\n===============================================\n");
            	printf("Arquivo fechado. Saindo do programa...");
            	printf("\n===============================================");
            	
            	break;
		}
	} while (opcao != 9);
}
