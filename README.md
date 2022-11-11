# MANIPULAÇÃO DE ARVORES
---
O programa representa o funcionamento de uma árvore binaria em C
Para que o programa funcione corretamente a árvore deverá ser criada 
previamente para conseguir realizar as demais funções.

DESCRIÇÃO DAS FUNÇÕES DO PROGRAMA
---

## CRIAR ÁRVORE: 

Verifica se a arvore ja está criada, caso positivo retorna uma mensagem avisando, 
caso negativo, retorna NULL ao ponteiro da raiz. 

## INSERIR: 

Verifica se a arvore possui raiz, caso negativo cria um nó raiz com 
alocação dinamica(malloc) e pede ao usuário um valor para a variavel "valor". 
Caso positivo garante que os números menores que a raiz sejam inseridos na 
subárvore da esquerda enquanto os maiores numeros na sub-arvore da direita. 

## IMPRIMIR: 

Fornece ao usuário as seguintes exibições da árvore (em pré ordem, em ordem e pós ordem).

## ESVAZIAR: 

Apaga todos os nós da árvore, deixando apenas o nó da raiz apontando para NULL.

## ALTURA: 

Retorna a altura corrente da árvore.

## EXIBIR NIVEL: 

Exibe os valores da arvore em ordem com seus respectivos níveis.
