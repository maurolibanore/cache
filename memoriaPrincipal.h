#pragma once
#include "nivelMemoria.h"
#include <iostream>

class MemoriaPrincipal : public NivelMemoria {
public:
    
    MemoriaPrincipal(const std::string &nome_, u64 lat_)
        : NivelMemoria(nome_, lat_) {}

    // Métodos virtuais herdados
    std::pair<bool, u64> ler(u64 endereco, u64 tempoAtual) override;
    std::pair<bool, u64> escrever(u64 endereco, u64 tempoAtual) override;

    
    void imprimirEstatisticas();
};
