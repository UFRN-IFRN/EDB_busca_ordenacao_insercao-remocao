#ifndef _SEQUENCIAS_H_
#define _SEQUENCIAS_H_



struct node {
	int data;
	node *next;
};

void remove_listaLigada( node **lista, int neutro, int pos );

void insert_listaLigada( node **lista, int elem,   int pos );

int insert_vector( int *lista, int tam,     int quantElementos, int elem,    int pos );

int remove_vector( int *lista, int neutro1, int quantElementos, int neutro2, int pos );



#endif