#include "memoriaPrincipal.h"

// Construtor: chama o construtor da classe base (NivelMemoria)
MemoriaPrincipal::MemoriaPrincipal(const std::string &n, u64 lat)
    : NivelMemoria(n, lat) {}

// Leitura
std::pair<bool, u64> MemoriaPrincipal::ler(u64 endereco, u64 tempoAtual) {
    // Soma o tempo atual com a latência da RAM
    u64 tempoTotal = tempoAtual + latencia;

    // Mostra a operação no terminal (debug)
    std::cout << "Lendo endereço 0x" << std::hex << endereco
              << " -> tempo total: " << std::dec << tempoTotal << " ciclos\n";

    // Retorna sucesso (true) e o tempo total
    return {true, tempoTotal};
}

// Escrita
std::pair<bool, u64> MemoriaPrincipal::escrever(u64 endereco, u64 tempoAtual) {
    // Soma o tempo atual com a latência
    u64 tempoTotal = tempoAtual + latencia;

    // Mostra a operação no terminal
    std::cout << "Escrevendo endereço 0x" << std::hex << endereco
              << " -> tempo total: " << std::dec << tempoTotal << " ciclos\n";

    // Retorna sucesso e tempo total
    return {true, tempoTotal};
}

void MemoriaPrincipal::imprimirEstatisticas() {
    std::cout << "\n📊 Estatísticas da Memória Principal (" << nome << "):\n";
    std::cout << "Latência: " << latencia << " ciclos\n";
}
