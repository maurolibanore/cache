#include "NivelMemoria.h"
#include <cstdint>
#include <string>
#include <utility>

class MemoriaPrincipal : public NivelMemoria {
private:
    u64 leituras = 0;
    u64 escrituras = 0;
public:
    MemoriaPrincipal(const std::string &n, u64 lat);
    std::pair<bool,u64> ler(u64 endereco, u64 tempo_atual) override;
    std::pair<bool,u64> escrever(u64 endereco, u64 tempo_atual) override;
    void imprime_estatisticas() const;
};
