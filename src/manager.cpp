/**
 * @file    manager.cpp
 * @brief   Código fonte com a implementacao de funcoes que
            realizam o gerenciamento do processo da análise empírica.
 * @author  Bianca Santiago (bianca.santiago72@gmail.com)
 * @author  Jaine Budke (jainebudke@hotmail.com)
 * @since   19/06/2017
 * @date    29/06/2017
 */

#include "sequencias.h"
#include "manager.h"

#include <chrono>
#include <ctime>
#include <vector>
#include <iomanip>


/**
 * @brief Gera a base de busca aleatória.
 * @details Função implementada fazendo uso das bibliotecas ctime e cstdlib.
 * @param base Vetor com a base de busca.
 * @param tamBase Tamanho da base de busca.
 */
void generateRandomBaseVector( int *base, int tamBase ){

    int qntElem = 0;

    for ( int i = 0; i < tamBase; ++i ) {         // gerando base de busca
        int num_aleatorio = std::rand() % 200000; // número aleatório entre 0 e 2000
        qntElem = insert_vector( base, tamBase, qntElem, num_aleatorio, i );  // Add valor à base
    }

}

void generateRandomBaseLL( node **base, int tamBase ){

    for ( int i = 0; i < tamBase; ++i ) {         // gerando base de busca
        int num_aleatorio = std::rand() % 200000; // número aleatório entre 0 e 2000
        insert_listaLigada( base, num_aleatorio, i ); // Add valor à base
    }

}


/**
 * @brief Analisa a base de dados gerada apontando o melhor, pior e médio caso dos algoritmos de ordenação insertionSort e selectionSort.
 * @param tamBase Tamanho da base de busca.
 * @param functocall Função de ordenacao (insertionSort ou selectionSort).
 */
void analiseCasos( std::ofstream & arqSaidaMelhor, std::ofstream & arqSaidaPior, std::ofstream & arqSaidaMedio, int tamBase, std::function < int( int *, int , int , int, int )>functocall ){

    int *base = new int[tamBase]; // Vetor com base de busca


    // ==================================
    // gera base de dados e tempo para inicializar melhor e pior tempo
    // ==================================
    generateRandomBaseVector( base, tamBase );
    double tempo = tempoExecucao( base, tamBase, functocall );

    // declara e inicializa variaveis de medicao de tempo
    int melhorTempo = tempo;
    int piorTempo = tempo;
    int medioTempo;
    int somaTempos = 0;


    // roda 100x cada base
    for ( int i = 0; i < 100; ++i ) {

        // gera base de dados
        generateRandomBaseVector( base, tamBase );

        // recebendo tempo que levou para ordenar base
        double tempo = tempoExecucao( base, tamBase, functocall );

        // atualizando pior e melhor caso
        if ( tempo < melhorTempo ) { // verifica se o novo tempo é menor que o melhor computado
            melhorTempo = tempo; // novo tempo é dado como o melhor marcado
        } else if ( tempo > piorTempo ) { // verifica se o novo tempo é maior que o pior computado
            piorTempo = tempo; // novo tempo é dado como o pior marcado
        }

        // atualizando somatorio dos tempos
        somaTempos += tempo;

    }

    // denotando o tempo médio de ordenação
    medioTempo = ( somaTempos - piorTempo - melhorTempo )/98;

    std::cout << "Pior caso: " << piorTempo << "\nMelhor caso: " << melhorTempo << "\nMédio caso: " << medioTempo << "\n";

    arqSaidaMelhor << tamBase << std::setw(10) << melhorTempo << std::endl;
    arqSaidaPior   << tamBase << std::setw(10) << piorTempo   << std::endl;
    arqSaidaMedio  << tamBase << std::setw(10) << medioTempo  << std::endl;


}


/**
 * @brief Realiza a medição do tempo da execução da ordenacao de uma base de dados com o insertionSort e selectionSort.
 * @details Função implementada fazendo uso das bibliotecas iomanip e time.h.
 * @param V Vetor com a base de dados.
 * @param n Tamanho da base de dados.
 * @param funcOrden Função de ordenacao (insertionSort ou selectionSort).
 * @return O tempo de execução da ordenacao.
 */
int tempoExecucao( int *V, int n, std::function < int( int *, int , int , int, int ) >funcOrden  ){

    int pos = std::rand() % n; // número aleatório entre 0 e quantidade de elementos
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    funcOrden( V, n, n-1, 99, pos ); // ordena vetor com insertionSort ou selectionSort
    end = std::chrono::system_clock::now();

    int elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds> (end-start).count();

    return elapsed_seconds;

}


/**
 * @brief Analisa a base de dados gerada apontando o melhor, pior e médio caso dos algoritmos de ordenação quickSort e mergeSort.
 * @param tamBase Tamanho da base de busca.
 * @param functocall2 Função de ordenacao (quickSort e mergeSort).
 */
void analiseCasos2( std::ofstream & arqSaidaMelhor, std::ofstream & arqSaidaPior, std::ofstream & arqSaidaMedio, int tamBase, std::function< int( node **, int , int ) >functocall2 ){


    struct node *base = NULL; // criando lista ligada

    // =====================================================
    // gera base de dados e tempo para inicializar melhor e pior tempo
    // =====================================================
    generateRandomBaseLL( &base, tamBase );
    double tempo = tempoExecucao2( &base, tamBase, functocall2 );

    // declara e inicializa variaveis de medicao de tempo
    int melhorTempo = tempo;
    int piorTempo = tempo;
    int medioTempo;
    int somaTempos = 0;


    // roda 100x cada base
    for ( int i = 0; i < 100; ++i ) {

        // gera base de dados
        generateRandomBaseLL( &base, tamBase );

        // recebendo tempo que levou para ordenar base
        double tempo = tempoExecucao2( &base, tamBase, functocall2 );

        // atualizando pior e melhor caso
        if ( tempo < melhorTempo ) { // verifica se o novo tempo é menor que o melhor computado
            melhorTempo = tempo; // novo tempo é dado como o melhor marcado
        } else if ( tempo > piorTempo ) { // verifica se o novo tempo é maior que o pior computado
            piorTempo = tempo; // novo tempo é dado como o pior marcado
        }

        // atualizando somatorio dos tempos
        somaTempos += tempo;

    }

    // denotando o tempo médio de ordenação
    medioTempo = ( somaTempos - piorTempo - melhorTempo )/98;

    std::cout << "Pior caso: " << piorTempo << "\nMelhor caso: " << melhorTempo << "\nMédio caso: " << medioTempo << "\n";

    arqSaidaMelhor << tamBase << std::setw(10) << melhorTempo << std::endl;
    arqSaidaPior   << tamBase << std::setw(10) << piorTempo   << std::endl;
    arqSaidaMedio  << tamBase << std::setw(10) << medioTempo  << std::endl;

}


/**
 * @brief Realiza a medição do tempo da execução da ordenacao de uma base de dados com o quickSort e mergeSort.
 * @details Função implementada fazendo uso das bibliotecas iomanip e time.h.
 * @param V Vetor com a base de dados.
 * @param n Tamanho da base de dados.
 * @param funcOrden Função de ordenacao (quickSort e mergeSort).
 * @return O tempo de execução da ordenacao.
 */
int tempoExecucao2( node **V, int n, std::function < void( node **l , int, int ) >funcOrden  ){

    int pos = std::rand() % n; // número aleatório entre 0 e quantidade de elementos

    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    funcOrden( V, 42 , pos ); // ordena vetor com insertionSort
    end = std::chrono::system_clock::now();

    int elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds> (end-start).count();

    return elapsed_seconds;

}
