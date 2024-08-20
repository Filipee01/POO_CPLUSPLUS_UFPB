# Nome do compilador
CXX = g++

# Flags do compilador
CXXFLAGS = -Wall -std=c++17

# Diretórios dos arquivos de cabeçalho e fontes
INCLUDES = -Iinclude
SRC_DIR = src
OBJ_DIR = obj

# Nome do executável final
TARGET = olimpíadas

# Lista dos arquivos objeto a serem gerados
OBJECTS = $(OBJ_DIR)/main.o $(OBJ_DIR)/Atleta.o $(OBJ_DIR)/Pais.o $(OBJ_DIR)/Modalidade.o $(OBJ_DIR)/Medalha.o

# Regra padrão para compilar tudo
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

# Regras para compilar os arquivos fonte
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRC_DIR)/main.cpp -o $@

$(OBJ_DIR)/Atleta.o: $(SRC_DIR)/Atleta.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRC_DIR)/Atleta.cpp -o $@

$(OBJ_DIR)/Pais.o: $(SRC_DIR)/Pais.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRC_DIR)/Pais.cpp -o $@

$(OBJ_DIR)/Modalidade.o: $(SRC_DIR)/Modalidade.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRC_DIR)/Modalidade.cpp -o $@

$(OBJ_DIR)/Medalha.o: $(SRC_DIR)/Medalha.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRC_DIR)/Medalha.cpp -o $@

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)
