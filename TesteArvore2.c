#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	int nivel;
	struct no *esquerda;
	struct no *direita;
}No;

int menu(){
	int opcao;
	printf("\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
	printf("\t\xBA\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB MANIPULANDO ARVORE \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xBA\n");
	printf("\t\xBA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA\n");
	printf("\t\xBA**** [1] - Criar Arvore ************ [4] - Altura ******************\xBA\n");
	printf("\t\xBA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA\n");
	printf("\t\xBA**** [2] - inserir ***************** [5] - Esvaziar Arvore *********\xBA\n");
	printf("\t\xBA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA\n");
	printf("\t\xBA**** [3] - imprimir **************** [6] - Exibir Nivel ************\xBA\n");
	printf("\t\xBA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA\n");
	printf("\t\xBA******* DIGITE UMA DAS OPCOES A SEGUIR OU ZERO(0) PARA SAIR ********\xBA\n");
	printf("\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	scanf("%d", &opcao);
	
	return opcao;
}

No* criarArvore(No *raiz){
	if(raiz != NULL){
		printf("ARVORE JA EXISTE\n");
	}
	else{
		printf("ARVORE CRIADA COM SUCESSO\n");
		return NULL;		
	}
	
}

No* inserir(No *raiz, int num){
	if(raiz == NULL){
		No *aux = malloc(sizeof(No));
		aux->valor = num;
		aux->nivel = 0;
		aux->esquerda = NULL;
		aux->direita = NULL;
		return aux;
	}else{
		if(num < raiz->valor){
			raiz->esquerda = inserir(raiz->esquerda, num);
		}else{
			raiz->direita = inserir(raiz->direita, num);
		}
		return raiz;
		
	}
}


int altura(No *raiz){
	if(raiz == NULL){
		return -1;
	}else{
		int esq = altura(raiz->esquerda);
		int dir = altura(raiz->direita);
		if(esq > dir){
			return esq + 1;
		}else{
			return dir + 1;
		}
	}
}

void imprimirPreOrdem(No *raiz){
	if(raiz!=NULL){
		printf("%d ", raiz->valor);
		imprimirPreOrdem(raiz->esquerda);
		imprimirPreOrdem(raiz->direita);
	}
}

void imprimirEmOrdem(No *raiz){
	if(raiz!=NULL){
		imprimirEmOrdem(raiz->esquerda);
		printf("%d ", raiz->valor);
		imprimirEmOrdem(raiz->direita);
	}
}

void imprimirPosOrdem(No *raiz){
    if(raiz != NULL){
        imprimirPosOrdem(raiz->esquerda);
        imprimirPosOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

void imprimirNivel(No *raiz, int nivel){
	if(raiz != NULL){
        imprimirNivel(raiz->esquerda, nivel+1);
        printf("%d(%d) ", raiz->valor, nivel);
        imprimirNivel(raiz->direita, nivel+1);
        
    }
}

No* esvaziarArvore(No *raiz){
	if (raiz != NULL){	
		esvaziarArvore(raiz->esquerda);
		esvaziarArvore(raiz->direita);
		free(raiz);
		return raiz = NULL;
	}
}

int main(){
	No *raiz = NULL;
	int opcao, valor, repeat = 1;
	
	do{
//		printf("\n\t0 - Sair\n\t1 - Criar Arvore\n\t2 - inserir\n\t3 - imprimir\n\t4 - Altura\n\t5 - Esvaziar Arvore\n\t6 - Exibir Nivel\n");
//		scanf("%d", &opcao);
		opcao = menu();
		switch(opcao){
			case 1:
				if(repeat == 1){
					criarArvore(raiz);
					repeat = 0;
				}else{
					printf("Arvore ja foi criada\n");
				}
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\n\tDigite um valor: ");
				scanf("%d", &valor);
				
				raiz = inserir(raiz, valor);
				
				system("cls");
				break;
			case 3:
				printf("\n\tARVORE PRE-ORDEM:\n\t");
				imprimirPreOrdem(raiz);
				printf("\n");
				printf("\n\tARVORE EM-ORDEM:\n\t");
				imprimirEmOrdem(raiz);
				printf("\n");
				printf("\n\tARVORE POS-ORDEM:\n\t");
				imprimirPosOrdem(raiz);
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 4:
				printf("\n\tAltura da arvore: %d\n\n", altura(raiz));
				system("pause");
				system("cls");
				break;
			case 5:
				raiz = esvaziarArvore(raiz);
				printf("ARVORE ESVAZIADA\n");
				system("pause");
				system("cls");
				break;
			case 6:
				printf("\n\tARVORE PRE-ORDEM:\n\t");
				imprimirNivel(raiz, raiz->nivel);
				printf("\n");
				system("pause");
				system("cls");
			default:
				if(opcao != 0){
					printf("\n\tOpcao invalida!!!\n");
					system("cls");
				}
		}
	}while(opcao!=0);
	
	raiz = inserir(raiz, 50);
	
	return 0;
}