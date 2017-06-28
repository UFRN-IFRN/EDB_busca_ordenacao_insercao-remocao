#include <iostream>
#include "sequencias.h"


int main(){
	
	// criando vetor 

	/*
	int tam = 10;
	int *list_vector = new int[tam];

	int qntElem = 0;
	qntElem = insert_vector( list_vector, tam, qntElem, 99, 0 );
	std::cout << list_vector[0] << "\n";

	qntElem = insert_vector( list_vector, tam, qntElem, 12, 1 );
	std::cout << list_vector[0] << "\n";
	std::cout << list_vector[1] << "\n";

	qntElem = insert_vector( list_vector, tam, qntElem, 78, 0 );
	std::cout << list_vector[0] << "\n";
	std::cout << list_vector[1] << "\n";
	std::cout << list_vector[2] << "\n\n\n";

	qntElem = remove_vector( list_vector, qntElem, 0 );
	std::cout << list_vector[0] << "\n";
	std::cout << list_vector[1] << "\n";
	std::cout << list_vector[2] << "\n";
	*/


	// criando lista ligada
	struct node *list_listaLigada = NULL;
	insert_listaLigada( &list_listaLigada, 99, 0 );
	std::cout << list_listaLigada->data << "\n";

	insert_listaLigada( &list_listaLigada, 12, 1 );
	std::cout << list_listaLigada->data << "\n";
	std::cout << list_listaLigada->next->data << "\n";

	insert_listaLigada( &list_listaLigada, 46, 1 );
	std::cout << list_listaLigada->data << "\n";
	std::cout << list_listaLigada->next->data << "\n";
	std::cout << list_listaLigada->next->next->data << "\n";

	insert_listaLigada( &list_listaLigada, 87, 3 );
	std::cout << list_listaLigada->data << "\n";
	std::cout << list_listaLigada->next->data << "\n";
	std::cout << list_listaLigada->next->next->data << "\n";
	std::cout << list_listaLigada->next->next->next->data << "\n\n\n";


	remove_listaLigada( &list_listaLigada, 1 );

	node *aux = list_listaLigada;
	while( aux->next != NULL ){
		std::cout << aux->data << "\n";
		aux = aux->next;
	}
	std::cout << aux->data << "\n";



	return 0;

}