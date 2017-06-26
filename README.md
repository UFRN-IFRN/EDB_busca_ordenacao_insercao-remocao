# ALGORITMOS DE BUSCA_ORDENACAO_INSERCAO-REMOCAO

## Sobre o projeto:

Análise empírica dos algoritmos de busca: sequencial e binária, implementados de forma recursiva e iterativa. Com medição de tempo e experimentos com vetores de diferentes tamanhos da base de busca.
Análise empírica dos algoritmos de ordenacao: selectionSort, insertionSort, quickSort e mergeSort. Com medição de tempo e experimentos com vetores de diferentes tamanhos.
Análise empírica dos algoritmos de insercao-remocao, implementados em uma lista ligada e em um vetor. Com medição de tempo e experimentos com vetores de diferentes tamanhos.
        
        
## Como compilar:

Para compilar o projeto, basta digitar, pelo terminal, o comando abaixo

    make
    

Comando para executar o programa
    
    ./bin/analise


## TODO

- [] Implementar algoritmos de busca.
- [] Implementar algoritmos de ordenacao.
- [] Implementar algoritmos de insercao-remocao.
- [] Fornecer instancia do problema de busca: base de dados e chave.
- [] Fornecer instancia do problema de ordenacao: vetor de tamanho N.
- [] Fornecer instancia do problema de insercao-ordenacao: vetor de tamanho N.
- [] Adicionar medição de tempo.
- [] Salvar dados em arquivo .txt
- [] Gerar gráficos.

## Gerar gráficos

Os scripts de geração dos gráficos de análise empírica dos algoritmos de busca estão disponíveis neste projeto.
Para gerar os gráficos com o gnuplot, basta executar:

	gnuplot> load 'grafBI.gnu'
	gnuplot> load 'grafBR.gnu'
	gnuplot> load 'grafSI.gnu'
	gnuplot> load 'grafSR.gnu'

	gnuplot> load 'graphInsertion.gnu'
	gnuplot> load 'graphSelection.gnu'
	gnuplot> load 'graphQuick.gnu'
	gnuplot> load 'graphMerge.gnu'

	gnunplot> load...



Programa desenvolvido por _Bianca Santiago_ (< *bianca.santiago72@gmail.com* >) e _Jaine Budke_ (< *jainebudke@hotmail.com* >), 2017.1
