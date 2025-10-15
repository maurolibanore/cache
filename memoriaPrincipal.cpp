#include "MemoriaPrincipal.h"
#include <iostream>

// Construtor
MemoriaPrincipal::MemoriaPrincipal(const std::string &n, u64 lat)
    : NivelMemoria(n, lat) {}

// Leitura
std::pair<bool, u64> MemoriaPrincipal::ler(u64 endereco, u64 tempo_atual) {
    leituras++;
    return {true, tempo_atual + latencia};
}

// Escrita
std::pair<bool, u64> MemoriaPrincipal::escrever(u64 endereco, u64 tempo_atual) {
    escrituras++;
    return {true, tempo_atual + latencia};
}

void MemoriaPrincipal::imprime_estatisticas() const {
    std::cout << "=== Memoria Principal: " << nome << " ===\n";
    std::cout << "Leituras: " << leituras << " | Escritas: " << escrituras << "\n";
    std::cout << "Latencia por acesso: " << latencia << " ciclos\n\n";
}
