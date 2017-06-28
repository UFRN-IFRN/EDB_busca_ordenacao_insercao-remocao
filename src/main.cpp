#include <iostream>
#include "sequencias.h"


int main(){
	
	// criando vetor 
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

	// criando lista ligada
	struct node *list_listaLigada = NULL;


	return 0;
}