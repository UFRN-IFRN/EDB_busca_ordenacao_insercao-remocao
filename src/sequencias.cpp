#include <cstddef>
#include "sequencias.h"

void inserirInicio( node *lista, int elem ){
	node *tmp = lista;
	lista = new node;
	lista->next = tmp;
	lista->data = elem;
}


void insert_listaLigada( node *lista, int elem, int pos ){
	if(pos == 0) inserirInicio( lista, elem );
	else{
		node *tmp = lista;
		for( int i=0 ; i<pos-1 && tmp->next != NULL ; i++ ){
			tmp = tmp->next;
		}
		node *tmp2 = tmp->next;
		tmp->next = new struct node;
		tmp->next->next = tmp2;
		tmp->next->data = elem;
	}
}

/*
void remove_listaLigada( node *lista ){

	if( lista != NULL ){
		node *tpm = lista;
		lista = lista->next;
		delete *tmp;
	}

}
*/

void insert_vector( int *lista, int tam, int *quantElementos, int elem, int pos ){

	if( lista == NULL ||    			  // verifica se lista tá vazia 
		*quantElementos == tam || 		  // ou se está cheia em relação a espaço físico
		pos <= *quantElementos ) return;  // ou se a posição que vai inserir é menor igual a quantidade de elementos				
	

	for ( int i = *quantElementos ; i > pos ; i-- ) {
		lista[i] = lista[i+1]; // empurra elementos
	}

	lista[pos] = elem;   // insere elemento na posição indicada
	*quantElementos++; 	 // incrementa quantidade de elementos

}


void remove_vector( int *lista, int *quantElementos, int pos ){

	if( lista == NULL || *quantElementos == 0 || pos < *quantElementos ) return;
	for( int i = pos ; i <(*quantElementos-1) ; ++i){
		lista[i] = lista[i+1];
	}
	*quantElementos--;

}