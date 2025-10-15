#include "memoriaPrincipal.h"
#include <iostream>

int main() {
    // Cria um objeto MemoriaPrincipal com nome e latência
    MemoriaPrincipal ram("RAM", 100);

    // Realiza uma leitura e uma escrita
    auto resultadoLeitura = ram.ler(0x1234, 0);
    auto resultadoEscrita = ram.escrever(0x1234, resultadoLeitura.second);

    // Mostra o tempo acumulado das operações
    std::cout << "Tempo após leitura: " << resultadoLeitura.second << " ciclos\n";
    std::cout << "Tempo após escrita: " << resultadoEscrita.second << " ciclos\n";

    // Exibe estatísticas da memória
    ram.imprimirEstatisticas();
}
