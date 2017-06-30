# Makefile, separando os diferentes elementos da aplicacao
# como codigo (src), cabecalhos (include), executaveis (build), bibliotecas (lib), etc.
# Cada elemento e alocado em uma pasta especifica, organizando melhor seu codigo fonte.
#
# Algumas variaveis sao usadas com significado especial:
#
# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pre-requisito
#

# Comandos do sistema operacional
RM = rm -rf 

# Compilador
CC = g++ 

# Variaveis para os subdiretorios
INC_DIR = ./include
LIB_DIR = ./lib
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc
DAT_DIR = ./data
TEST_DIR = ./test

# Opcoes de compilacao
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean doxy debug doc

# Define o alvo (target) para a compilacao completa.
# Ao final da compilacao, remove os arquivos objeto.
all: sequencias
debug: CFLAGS += -g -O0
debug: sequencias

#------------------------------------------------------------------------------------------------------------------------------

# Define os arquivos main.cpp sequencias.cpp manager.cpp como dependencias
# Alvo (target) para a construcao do executavel sequencias
sequencias: $(OBJ_DIR)/main.o $(OBJ_DIR)/sequencias.o $(OBJ_DIR)/manager.o 
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'sequencias' criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto main.o
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto sequencias.o
# Define os arquivos sequencias.cpp sequencias.h como dependencias
$(OBJ_DIR)/sequencias.o: $(SRC_DIR)/sequencias.cpp $(INC_DIR)/sequencias.h
	$(CC) -c $(CFLAGS) -o $@ $<	

# Alvo (target) para a construcao do objeto manager.o
# Define os arquivos manager.cpp manager.h como dependencias
$(OBJ_DIR)/manager.o: $(SRC_DIR)/manager.cpp $(INC_DIR)/manager.h
	$(CC) -c $(CFLAGS) -o $@ $<	

#------------------------------------------------------------------------------------------------------------------------------

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen -g

doc:
	doxygen

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DAT_DIR)/output/*
