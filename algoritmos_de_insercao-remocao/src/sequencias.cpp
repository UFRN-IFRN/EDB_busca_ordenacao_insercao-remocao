#include <cstddef>
#include <iostream>

#include "sequencias.h"


void insert_listaLigada( node **lista, int elem, int pos ){
	
	if(pos == 0) {
		node *tmp = *lista;
		*lista = new node;
		(*lista)->next = tmp;
		(*lista)->data = elem;
	}
	else{
		node *tmp = *lista;
		for( int i=0 ; i<pos-1 && tmp->next != NULL ; i++ ){
			tmp = tmp->next;
		}
		node *tmp2 = tmp->next;
		tmp->next = new struct node;
		tmp->next->next = tmp2;
		tmp->next->data = elem;
	}

}


void remove_listaLigada( node **lista, int neutro, int pos ){

	// Remove do inicio
	if( pos == 0 ){

		node *tmp = *lista;
		*lista = (*lista)->next;
		delete tmp;

	} else {

		node *tmp     = *lista;
		node *refTras = NULL;

		for( int i=0 ; i < pos && tmp->next != NULL ; i++ ){

			refTras = tmp;
			tmp = tmp->next;
		}

        refTras->next = tmp->next;

		delete tmp;

	}

}

int insert_vector( int *lista, int tam, int quantElementos, int elem, int pos ){


 	// verifica se lista tá vazia
	if( quantElementos == 0 ) { 
		lista[0] = elem;
		quantElementos++; 	  // incrementa quantidade de elementos
		return quantElementos;
	}

	for ( int i = quantElementos ; i > pos ; i-- ) {
		lista[i] = lista[i-1]; // empurra elementos
	}

	lista[pos] = elem;    // insere elemento na posição indicada
	quantElementos++; 	  // incrementa quantidade de elementos

	return quantElementos;

}


int remove_vector( int *lista, int neutro1, int quantElementos, int neutro2, int pos ){

	for( int i = pos ; i <(quantElementos-1) ; ++i){
		lista[i] = lista[i+1];
	}
	lista[quantElementos-1] = 0;
	quantElementos--;

	return quantElementos;

}