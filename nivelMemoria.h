#include <string>
#include <utility>
#include <cstdint>

using u64 = uint64_t; 

class NivelMemoria {
public:
std::string nome; 
u64 latencia; 



NivelMemoria(const std::string &n, u64 lat) : nome(n), latencia(lat) {}


virtual ~NivelMemoria() = default;

virtual std::pair<bool, u64> read(u64 endereco, u64 tempo_atual) = 0;
virtual std::pair<bool, u64> write(u64 endereco, u64 tempo_atual) = 0; 



virtual size_t byteSize() const { return 0; }
};