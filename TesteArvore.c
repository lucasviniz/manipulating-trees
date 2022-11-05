#include <stdio.h>
#include <stdlib.h>


struct item{
	int cod;
};

typedef struct item Item;

struct no{
	Item item;
	struct no *esquerda;
	struct no *direita;
};

typedef struct no No;

No *inicializar(){
	return NULL;
}

Item criarItem(int cod){
	Item item;
	item.cod = cod;
	return item;
}

No *inserir(No *root, Item x){
	if(root == NULL){
		No *aux = (No*)malloc(sizeof(No));
		aux->item = x;
		aux->esquerda = NULL;
		aux->direita = NULL;
		return aux;
	}else{
		if(x.cod > root->item.cod){
			root->direita = inserir(root->direita, x);
		}else if(x.cod < root->item.cod){
			root->esquerda = inserir(root->esquerda, x);
		}
	}
	return root;
}

void imprimirArvore(No *root){
	if (root != NULL){
		printf("Valor: %d", root->item.cod);
		imprimirArvore(root->esquerda);
		imprimirArvore(root->direita);
	}
	
}

void liberarArvore(No *root){
	if (root != NULL){
		liberarArvore(root->esquerda);
		liberarArvore(root->direita);
		free(root);
	}
	
}

int main(){
	char opcao = 's';
	int valor;
	No *root = inicializar();
	
	while(opcao == 's' || opcao == 'S'){
		printf("Insira um valor: ");
		scanf("%d", &valor);
		root = inserir(root, criarItem(valor));
		printf("Deseja inserir um novo valor?");
		scanf("%s", &opcao);
	}
	
	imprimirArvore(root);
	liberarArvore(root);
	return 0;
}