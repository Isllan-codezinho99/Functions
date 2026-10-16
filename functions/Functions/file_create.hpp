#ifndef file_create
#define file_create
#include <fstream>
#include <string>

// Aqui vai eu de novo com ARQUIVOS!
// Autor: Isllan

namespace ft {
	class file_create_ {
	public:

		// Função padrão
		void createfile(const std::string& caminho, const std::string& texto = "") {
			std::ofstream arquivo(caminho, std::ios::app);

			if (arquivo.is_open() == false) {
				return;
				// error
			}

			arquivo << texto;
			arquivo.close();
			// sucess!
		}

		// Função com sobrecarga
		void createfile_s(const std::string& caminho, const std::string& novo_arquivo) {
			std::ofstream arquivo1(caminho, std::ios::app); // Esse caminho é literalmente um arquivo
			std::ofstream arquivo2(novo_arquivo, std::ios::app); // Segundo arquivo
		}

		void createfile_s(const std::string& caminho, const std::string& novo_arquivo, const bool& text = false, const std::string& texto_do_caminho = "", const std::string& texto_do_novo_arquivo = "") {
			std::ofstream arquivo1(caminho, std::ios::app);
			std::ofstream arquivo2(novo_arquivo, std::ios::app);

			if (text == false) {
				return;
			}
			else if (text == true) {
				// Verificar se o arquivo 1 esta aberto
				if (arquivo1.is_open() == true) {
					arquivo1 << texto_do_caminho << "\n";
					arquivo1.close();
				}

				// Veriicar se o arquivo 2 esta aberto
				if (arquivo2.is_open() == true) {
					arquivo2 << texto_do_novo_arquivo << "\n";
					arquivo2.close();
				}
			}
		}
	};
}


// Fim
#endif