# ALGORITMOS DE INSERCAO-REMOCAO

## Sobre o projeto:

Análise empírica dos algoritmos de insercao-remocao, implementados em uma lista ligada e em um vetor. Com medição de tempo e experimentos com vetores de diferentes tamanhos.
        
        
## Como compilar:

Para compilar o projeto, basta digitar, pelo terminal, o comando abaixo


    g++ -std=c++11 src/main.cpp src/sequencias.cpp src/manager.cpp -I include -o bin/analise

    

Comando para executar o programa
    
    ./bin/analise


## TODO

- [X] Implementar algoritmos de insercao-remocao.
- [X] Fornecer instancia do problema de insercao-remocao: vetor de tamanho N.
- [X] Adicionar medição de tempo.
- [X] Salvar dados em arquivo .txt
- [ ] Gerar gráficos.


## Gerar gráficos

Os scripts de geração dos gráficos de análise empírica dos algoritmos de busca estão disponíveis neste projeto.
Para gerar os gráficos com o gnuplot, basta executar:

	gnuplot> load 'grafILL.gnu'
	gnuplot> load 'grafIVT.gnu'
	gnuplot> load 'grafRLL.gnu'
	gnuplot> load 'grafRVT.gnu'

	gnuplot> load 'graphInsertListaLigada.gnu'
	gnuplot> load 'graphInsertVector.gnu'
	gnuplot> load 'graphRemoveListaLigada.gnu'
	gnuplot> load 'graphRemoveVector.gnu'

	gnunplot> load...



Programa desenvolvido por _Bianca Santiago_ (< *bianca.santiago72@gmail.com* >) e _Jaine Budke_ (< *jainebudke@hotmail.com* >), 2017.1
