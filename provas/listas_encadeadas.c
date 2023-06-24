// Lista encadeada com struct
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

typedef struct nodo
{
   int idade;
   char nome[20];
   struct nodo *prox;
}NODOPTR;



NODOPTR *getnodo()
{
    NODOPTR *p;
    p=(NODOPTR*)malloc(sizeof(struct nodo));
    return (p);
}

freenodo(NODOPTR *p)
{
   free(p);
}

void mostra_lista(NODOPTR *p)
{
	while(p != NULL)
	{
		printf("idade = %d nome = %s\n", p->idade, p->nome);
		p = p->prox;
	}
}

NODOPTR* ins_final(NODOPTR *p, int x, char *nome)
{
   NODOPTR *q, *new_node;
   if (p == NULL)
   {
      printf("A lista está vazia!\n");
      return NULL;
   }
   q = p;
   while (q->prox != NULL)
   {
      q = q->prox;
   }
   new_node = getnodo();
   new_node->idade = x;
   strcpy(new_node->nome, nome);
   new_node->prox = NULL;
   q->prox = new_node;
   return p;
}

NODOPTR* remov_elemento_por_nome(NODOPTR *p, char *nome)
{
   NODOPTR *atual, *anterior;

   if (p == NULL)
   {
      printf("A lista está vazia!\n");
      return NULL;
   }

   if (strcmp(p->nome, nome) == 0)
   {
      NODOPTR *temp = p;
      p = p->prox;
      free(temp);
      return p;
   }

   anterior = p;
   atual = p->prox;

   while (atual != NULL && strcmp(atual->nome, nome) != 0)
   {
      anterior = atual;
      atual = atual->prox;
   }

   if (atual == NULL)
   {
      printf("Nome não encontrado na lista!\n");
      return p;
   }

   anterior->prox = atual->prox;
   free(atual);
   return p;
}

NODOPTR* ordenar_lista(NODOPTR *p)
{
   NODOPTR *i, *j;
   int temp_idade;
   char temp_nome[20];
   
   for (i = p; i != NULL; i = i->prox)
   {
      for (j = i->prox; j != NULL; j = j->prox)
      {
         if (strcmp(i->nome, j->nome) > 0)
         {
            // Troca os elementos
            temp_idade = i->idade;
            strcpy(temp_nome, i->nome);
            i->idade = j->idade;
            strcpy(i->nome, j->nome);
            j->idade = temp_idade;
            strcpy(j->nome, temp_nome);
         }
      }
   }
      
   return p;
}



main(){ /* programa principal */

   int x, i, opcao;
   char ch, nome[20];
   
   NODOPTR *prim, *p, *ult;
   setlocale(LC_ALL,"portuguese");
   p=getnodo();   /* cria o primeiro nó da lista */
   printf("\n\nDigite a idade do primeiro aluno da lista: ");  
   scanf("%d",&x);
   fflush(stdin);
   
   p->idade=x;	/* preenche a informação do primeiro nó */
   printf("\nDigite o nome do primeiro aluno da lista: ");  
   gets(nome);
   fflush(stdin);
   strcpy(p->nome,nome);
   p->prox = NULL;
   prim = ult = p; // por enquanto esse é o único elemento da lista
	system("cls");
	do 
	{
		printf("\n----Opcoes:----\n");
        printf("1. Inserir outro nó no final da lista;\n");
        printf("2. Ordenar lista por nome;\n");
        printf("3. Remover elemento da lista;\n");
        printf("4. Mostrar lista;\n");
        printf("5. Sair do programa.\n\n");
		
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        system("cls");
        
        if(opcao < 1 || opcao > 5)
        {
        	printf("\nDigite uma opção válida.\n");
		}
        
        switch(opcao)
        {
        	case(1):
        	
        		printf("\nDigite a idade do próximo aluno da lista: ");  
		    	scanf("%d",&x);
		    	fflush(stdin);
		    	printf("\nDigite o nome do próximo aluno da lista: ");  
		    	gets(nome);
		    	fflush(stdin);
		    	ult = ins_final(ult, x, nome);
		    	
		    break;
		    
		    case(2):
		    
		    	printf("Lista Ordenada por nome:\n");
		    	prim = ordenar_lista(prim);
   				mostra_lista(prim);
		    	
		    break;
		    
		    case(3):
		    	
		    	fflush(stdin);
		    	printf("\nDigite o nome da pessoa que deseja remover: ");
   				gets(nome);
   				prim = remov_elemento_por_nome(prim,nome);
		    
		    break;
		    
		    case(4):
		    	
		    	mostra_lista(prim);
		    	
		    break;
		    
		    case(5):
		    
		    	printf("\n===============================================\n");
            	printf("Programa encerrado.");
            	printf("\n===============================================");
		    
		    break;
		}
	}while(opcao != 5);
}
