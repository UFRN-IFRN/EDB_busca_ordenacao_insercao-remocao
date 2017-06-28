#ifndef _SEQUENCIAS_H_
#define _SEQUENCIAS_H_

struct node {
	int data;
	node *next;
};

void inserirInicio( node *lista, int elem );

void insert_listaLigada( node *lista, int elem, int pos );

void insert_vector( int *lista, int tam, int *quantElementos, int elem, int pos );

void remove_vector( int *lista, int *quantElementos, int pos );

#endif