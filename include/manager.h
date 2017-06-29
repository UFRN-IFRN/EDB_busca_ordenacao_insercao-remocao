/**
 * @file    manager.h
 * @brief   Arquivo cabeçalho com a implementacao de funcoes que
                 realizam o gerenciamento do processo da análise empírica.
 * @author  Bianca Santiago (bianca.santiago72@gmail.com)
 * @author  Jaine Budke (jainebudke@hotmail.com)
 * @since    18/04/2017
 * @date     22/05/2017
 */

#ifndef _MANAGER_H_
#define _MANAGER_H_

#include <functional> // New (C ++11) template class.

#include <iostream>
#include <cstdlib>
#include <fstream>
using std::ofstream;

#include "sequencias.h"



int tempoExecucao( int *V, int n, std::function < int( int *, int , int , int, int )>funcOrden );
void analiseCasos( std::ofstream & arqSaidaMelhor, std::ofstream & arqSaidaPior, std::ofstream & arqSaidaMedio, int tamBase, std::function < int( int *, int , int , int, int )>functocall );


int tempoExecucao2( node **V, int n, std::function < void( node **l , int, int ) >funcOrden  );
void analiseCasos2( std::ofstream & arqSaidaMelhor, std::ofstream & arqSaidaPior, std::ofstream & arqSaidaMedio, int tamBase, std::function < void( node **l , int, int )>functocall );



#endif