#include "C:\Users\Isllan Juan\source\repos\Functions\functions\Functions\prints.hpp"
#include "C:\Users\Isllan Juan\source\repos\Functions\functions\Functions\file_create.hpp"
#include <string>

int main() {
	ft::print testes_1;
	ft::file_create_ testes_2;

	testes_1.print_fp("Ola");
	testes_1.print_fp("Ola,", " Como vai?");

	testes_1.print_fc("Dados", true);
	testes_1.print_fc("Olhe para baixo: ", "(NAO OLHE PARA BAIXO)", true);

	testes_2.createfile("Arquivo");
	testes_2.createfile("Arquivo", "Com texto dentro");

	testes_2.createfile_s("Arquivo_da_funcao_2", "arquivo_2_da_funcao", true, "ESSE AQUI EH O ARQUIVO 1", "ESSE AQUO EH O ARQUIVO2 2");

	// Fim dos Testes
	return 0;
}