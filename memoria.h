#ifndef MEMORIA_H
#define MEMORIA_H

#include <string>

class Memoria {
protected:
    std::string nome;
    int latencia;   // o custo em ciclos
    Memoria* proximoNivel; // Ponteiro para o próximo nível da hierarquia

public:
    // Construtor
    Memoria(const std::string& nome, int latencia, Memoria* proximoNivel = nullptr)
        : nome(nome), latencia(latencia), proximoNivel(proximoNivel) {}

    // Destrutor virtual é essencial para classes base com funções virtuais
    virtual ~Memoria() = default;

    void setProximoNivel(Memoria* nivel) {
        this->proximoNivel = nivel;
    }

    // --- Interface Comum (Métodos Virtuais Puros) ---
    // Devem ser implementados por Cache e MemoriaPrincipal.
    // Retornam a latência TOTAL da operação a partir deste nível.
    virtual long long ler(int endereco) = 0;
    virtual long long escrever(int endereco) = 0;
    virtual void imprimirEstatisticas() const = 0;
};

#endif // MEMORIA_H