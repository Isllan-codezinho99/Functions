// Ola novamente, aqui estou eu de novo
// Desa vez com funções, eu decidir aprender: Funções padrões e f~unções com sobrecarga
// Entao decidir fazer varias
// Vamos começar com os prints
// Auto: Isllan Codezinho / Farinha / Juan

#ifndef prints
#define prints
#include <iostream>

// Aqui criamos o namespace basico que é FT(functions tests)

namespace ft {
	// Criamos a primeira classe que pertence ao print

	class print {
	public:

		// A primeira funcao sera uma função padrao

		// Quebra de linha automatica
		void print_fp(const char text[50], const char text_extra[50] = "") { // esse text_extra = "" quer dizer ao c++: "Se o programmer nao passar o segundo parametro, use o padrão"
			std::cout << text << text_extra << "\n";
		}

		// Segunda funcao sera uma sobrecarga de funções


		void print_fc(const char dados[50]) {
			std::cout << dados;
		}

		// A mesam função mas com um paramentro EXTRA
		void print_fc(const char dados[50], const bool pular_linha = false) {
			if (pular_linha == true) {
				std::cout << dados << "\n";
			}
			else {
				std::cout << dados;
			}
		}

		void print_fc(const char dados[50], const char variavel[100], const bool pular_linha = false) {
			if (pular_linha == true) {
				std::cout << dados << variavel << "\n";
			}
			else {
				std::cout << dados << variavel;
			}
		}
	};
}


// Se voces olharem os testes la no code.cpp, voces vao perceber que cada sobrecarg tem um tipo de caminho, por exemplo, na segunda podemos colocar "dADOS", true, mas nao podemos colocar "Variaveis", mas se fossemos na 3 podemos colcoar no lugar de "true" variaveis, assim no ultimo lugar que seria "variaveis" vira true
// Sempre tem uma regra
// E isso bom para nao da erro
// FIM
// Se caso eu tiver errado em algum lugar, não hesite em me corrigir, sempre erro e dessa vez nao acessei o gemini e google, aprendi uma vez só e comecei a programar, erro meu, eu sei.
// Fim dessa vez
#endif