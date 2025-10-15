#include "MemoriaPrincipal.h"
#include <iostream>

int main() {
    MemoriaPrincipal mp("RAM", 100); // nome + latência em ciclos

    u64 tempo = 0;

    // Faz algumas leituras e escritas
    auto res1 = mp.ler(0, tempo);
    tempo = res1.second;

    auto res2 = mp.escrever(10, tempo);
    tempo = res2.second;

    auto res3 = mp.ler(20, tempo);
    tempo = res3.second;

    // Imprime estatísticas
    mp.imprime_estatisticas();

    std::cout << "Tempo total acumulado: " << tempo << " ciclos\n";

    return 0;
}
