/**
 * @file    main.cpp
 * @brief   Código fonte do programa com medição de tempo de execução dos algoritmos.
 * @author  Bianca Santiago (bianca.santiago72@gmail.com)
 * @author  Jaine Budke (jainebudke@hotmail.com)
 * @since   19/06/2017
 * @date    29/06/2017
 */

#include "manager.h"
#include "sequencias.h"

#include <time.h>
#include <ctime>

#include <iomanip>

#include <fstream>

/**
*@brief Função principal que contém o tempo de execução dos algoritmos de busca.
*/
int main(){

    std::srand(std::time(0)); // semente do rand

    // declara os diferentes tamanhos de base de busca que serão analisados
    int tamBase[] = { 500000, 600000, 700000, 800000, 900000, 1000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000 };


    ///////////////////////////////////////////////////////////////////////////
    // GRAVANDO DADOS EM ARQUIVOS dadosInsercaoLLMelhor.txt, dadosInsercaoLLPior.txt, dadosInsercaoLLMedio.txt
    ///////////////////////////////////////////////////////////////////////////

    // Gravando em dadosInsercaoLLMelhor.txt
    std::ofstream arqsaidaInsercaoLLMelhor;
    arqsaidaInsercaoLLMelhor.open( "dadosInsercaoLLMelhor.txt", std::ios::out );
    if( !arqsaidaInsercaoLLMelhor.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados InsercaoLLMelhor..." << std::endl;

    // Grava o cabeçalho
    arqsaidaInsercaoLLMelhor << "#Dados para o script geraGrafico.gnu do InsercaoLLMelhor" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaInsercaoLLMelhor << "#X" << std::setw(10) << "#Y" << std::endl;


    // Gravando em dadosInsercaoLLPior.txt
    std::ofstream arqsaidaInsercaoLLPior;
    arqsaidaInsercaoLLPior.open( "dadosInsercaoLLPior.txt", std::ios::out );
    if( !arqsaidaInsercaoLLPior.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados InsercaoLLPior..." << std::endl;

    // Grava o cabeçalho
    arqsaidaInsercaoLLPior << "#Dados para o script geraGrafico.gnu do InsercaoLLPior" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaInsercaoLLPior << "#X" << std::setw(10) << "#Y" << std::endl;


    // Gravando em dadosInsercaoLLMedio.txt
    std::ofstream arqsaidaInsercaoLLMedio;
    arqsaidaInsercaoLLMedio.open( "dadosInsercaoLLMedio.txt", std::ios::out );
    if( !arqsaidaInsercaoLLMedio.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados InsercaoLLMedio..." << std::endl;

    // Grava o cabeçalho
    arqsaidaInsercaoLLMedio << "#Dados para o script geraGrafico.gnu do InsercaoLLMedio" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaInsercaoLLMedio << "#X" << std::setw(10) << "#Y" << std::endl;


    ///////////////////////////////////////////////////////////////////////////
    // GRAVANDO DADOS EM ARQUIVOS dadosInsercaoVMelhor.txt, dadosInsercaoVPior.txt, dadosInsercaoVMedio.txt
    ///////////////////////////////////////////////////////////////////////////
    // Gravando dadosInsercaoVMelhor.txt
    std::ofstream arqsaidaInsercaoVMelhor;
    arqsaidaInsercaoVMelhor.open( "dadosInsercaoVMelhor.txt", std::ios::out );
    if( !arqsaidaInsercaoVMelhor.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados InsercaoVMelhor..." << std::endl;

    // Grava o cabeçalho
    arqsaidaInsercaoVMelhor << "#Dados para o script geraGrafico.gnu do InsercaoVMelhor" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaInsercaoVMelhor << "#X" << std::setw(10) << "#Y" << std::endl;

    // Gravando dadosInsercaoVPior.txt
    std::ofstream arqsaidaInsercaoVPior;
    arqsaidaInsercaoVPior.open( "dadosInsercaoVPior.txt", std::ios::out );
    if( !arqsaidaInsercaoVPior.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados InsercaoVPior..." << std::endl;

    // Grava o cabeçalho
    arqsaidaInsercaoVPior << "#Dados para o script geraGrafico.gnu do InsercaoVPior" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaInsercaoVPior << "#X" << std::setw(10) << "#Y" << std::endl;

    // Gravando dadosInsercaoVMedio.txt
    std::ofstream arqsaidaInsercaoVMedio;
    arqsaidaInsercaoVMedio.open( "dadosInsercaoVMedio.txt", std::ios::out );
    if( !arqsaidaInsercaoVMedio.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados InsercaoVMedio..." << std::endl;

    // Grava o cabeçalho
    arqsaidaInsercaoVMedio << "#Dados para o script geraGrafico.gnu do InsercaoVMedio" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaInsercaoVMedio << "#X" << std::setw(10) << "#Y" << std::endl;




    ///////////////////////////////////////////////////////////////////////////
    // GRAVANDO DADOS EM ARQUIVOS dadosRemocaoLLMelhor.txt, dadosRemocaoLLPior.txt, dadosRemocaoLLMedio.txt
    ///////////////////////////////////////////////////////////////////////////
    // Gravando dadosRemocaoLLMelhor.txt
    std::ofstream arqsaidaRemocaoLLMelhor;
    arqsaidaRemocaoLLMelhor.open( "dadosRemocaoLLMelhor.txt", std::ios::out );
    if( !arqsaidaRemocaoLLMelhor.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados RemocaoLLMelhor..." << std::endl;

    // Grava o cabeçalho
    arqsaidaRemocaoLLMelhor << "#Dados para o script geraGrafico.gnu do RemocaoLLMelhor" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaRemocaoLLMelhor << "#X" << std::setw(10) << "#Y" << std::endl;

    // Gravando dadosRemocaoLLPior.txt
    std::ofstream arqsaidaRemocaoLLPior;
    arqsaidaRemocaoLLPior.open( "dadosRemocaoLLPior.txt", std::ios::out );
    if( !arqsaidaRemocaoLLPior.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados RemocaoLLPior..." << std::endl;

    // Grava o cabeçalho
    arqsaidaRemocaoLLPior << "#Dados para o script geraGrafico.gnu do RemocaoLLPior" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaRemocaoLLPior << "#X" << std::setw(10) << "#Y" << std::endl;

    // Gravando dadosRemocaoLLMedio.txt
    std::ofstream arqsaidaRemocaoLLMedio;
    arqsaidaRemocaoLLMedio.open( "dadosRemocaoLLMedio.txt", std::ios::out );
    if( !arqsaidaRemocaoLLMedio.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados RemocaoLLMedio..." << std::endl;

    // Grava o cabeçalho
    arqsaidaRemocaoLLMedio << "#Dados para o script geraGrafico.gnu do RemocaoLLMedio" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaRemocaoLLMedio << "#X" << std::setw(10) << "#Y" << std::endl;


    ///////////////////////////////////////////////////////////////////////////
    // GRAVANDO DADOS EM ARQUIVOS dadosaRemocaoVMelhor.txt, dadosRemocaoVPior.txt, dadosRemocaoVMedio.txt
    ///////////////////////////////////////////////////////////////////////////
    // Gravando dadosRemocaoVMelhor.txt
    std::ofstream arqsaidaRemocaoVMelhor;
    arqsaidaRemocaoVMelhor.open( "dadosRemocaoVMelhor.txt", std::ios::out );
    if( !arqsaidaRemocaoVMelhor.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados RemocaoVMelhor..." << std::endl;

    // Grava o cabeçalho
    arqsaidaRemocaoVMelhor << "#Dados para o script geraGrafico.gnu  do RemocaoVMelhor" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaRemocaoVMelhor << "#X" << std::setw(10) << "#Y" << std::endl;


    // Gravando dadosRemocaoVPior.txt
    std::ofstream arqsaidaRemocaoVPior;
    arqsaidaRemocaoVPior.open( "dadosRemocaoVPior.txt", std::ios::out );
    if( !arqsaidaRemocaoVPior.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados RemocaoVPior..." << std::endl;

    // Grava o cabeçalho
    arqsaidaRemocaoVPior << "#Dados para o script geraGrafico.gnu  do RemocaoVPior" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaRemocaoVPior << "#X" << std::setw(10) << "#Y" << std::endl;


    // Gravando dadosRemocaoVMedio.txt
    std::ofstream arqsaidaRemocaoVMedio;
    arqsaidaRemocaoVMedio.open( "dadosRemocaoVMedio.txt", std::ios::out );
    if( !arqsaidaRemocaoVMedio.is_open() ){
        return 0;
    }

    std::cout << "Gerando dados RemocaoVMedio..." << std::endl;

    // Grava o cabeçalho
    arqsaidaRemocaoVMedio << "#Dados para o script geraGrafico.gnu  do RemocaoVMedio" << std::endl;
    /*
     * X - Tamanho da base de busca
     * Y - Tempo de execução
    */
    arqsaidaRemocaoVMedio << "#X" << std::setw(10) << "#Y" << std::endl;








// =========================================================
// =========================================================



    for( int i = 0 ; i < 12; ++i ){
        std::cout << "===========================\n";
        std::cout << "Tamanho de busca = " << tamBase[i] << "\n";
        std::cout << "===========================\n";
        
        // RESULTADO INSERCAO vector
        std::cout << "Insercao vector: \n";
        std::function < int( int *, int , int , int, int ) >insertV = insert_vector;
        analiseCasos( arqsaidaInsercaoVMelhor, arqsaidaInsercaoVPior, arqsaidaInsercaoVMedio, tamBase[i], insertV );
        std::cout << "\n";

        // RESULTADO REMOCAO vector
        std::cout << "Remocao vector: \n";
        std::function < int( int *, int , int , int, int ) >removeV = remove_vector;
        analiseCasos( arqsaidaRemocaoVMelhor, arqsaidaRemocaoVPior, arqsaidaRemocaoVMedio, tamBase[i], removeV );
        std::cout << "\n";
        
        // RESULTADO INSERCAO lista ligada
        std::cout << "Insercao lista ligada: \n";
        std::function < void( node ** , int, int ) >insertLL = insert_listaLigada;
        analiseCasos2( arqsaidaInsercaoLLMelhor, arqsaidaInsercaoLLPior, arqsaidaInsercaoLLMedio, tamBase[i], insertLL );
        std::cout << "\n";

        // RESULTADO REMOCAO lista ligada
        std::cout << "Remocao lista ligada: \n";
        std::function < void( node ** , int, int ) >removeLL = remove_listaLigada;
        analiseCasos2( arqsaidaRemocaoLLMelhor, arqsaidaRemocaoLLPior, arqsaidaRemocaoLLMedio, tamBase[i], removeLL );
        std::cout << "\n";
		
    }




// =========================================================
// =========================================================









    // FECHANDO ARQUIVO COM DADOS INSERCAO LISTA LIGADA
    std::cout << "Fechando o arquivo dadosInsercaoLL.txt..." << std::endl;
    arqsaidaInsercaoLLMelhor.close();
    arqsaidaInsercaoLLPior.close();
    arqsaidaInsercaoLLMedio.close();

    // FECHANDO ARQUIVO COM DADOS INSERCAO VECTOR
    std::cout << "Fechando o arquivo dadosInsercaoV.txt..." << std::endl;
    arqsaidaInsercaoVMelhor.close();
    arqsaidaInsercaoVPior.close();
    arqsaidaInsercaoVMedio.close();

    // FECHANDO ARQUIVO COM DADOS REMOCAO LISTA LIGADA
    std::cout << "Fechando o arquivo dadosRemocaoLL.txt..." << std::endl;
    arqsaidaRemocaoLLMelhor.close();
    arqsaidaRemocaoLLPior.close();
    arqsaidaRemocaoLLMedio.close();

    // FECHANDO ARQUIVO COM DADOS REMOCAO VECTOR
    std::cout << "Fechando o arquivo dadosRemocaoV.txt..." << std::endl;
    arqsaidaRemocaoVMelhor.close();
    arqsaidaRemocaoVPior.close();
    arqsaidaRemocaoVMedio.close();

    return 0;

}
