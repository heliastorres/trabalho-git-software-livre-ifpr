CXX = g++

CXXFLAGS = -Wall -Wextra

all: primo vetor matriz
	@echo "Todos os programas foram compilados!"

primo: primo.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Programa 'primo' compilado com sucesso!"

vetor: vetor.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Programa 'vetor' compilado com sucesso!"

matriz: matriz.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Programa 'matriz' compilado com sucesso!"

clean:
	rm -f primo vetor matriz
	@echo "Arquivos executáveis limpos."

.PHONY: all primo vetor matriz clean
