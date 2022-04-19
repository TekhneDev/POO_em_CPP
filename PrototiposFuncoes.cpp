#include <iostream>

//Podemos informar ao compilador que a função existe
//e que iremos declarar ela posteriormente
// isso é feito através dos prótipos das funções
//Coloque apenas o cabeçalho da função terminado com ;
float soma(float num1, float num2);

//main já é uma função
//observe o tipo de retorno int
// o nome é main e ela não recebe parâmetos neste exemplo (podem existir argumentos de linha de comando que serão enviados a dois parâmetros da função main

int main()
{
	//a execução do programa é realizada de cima para baixo, desta forma o compilador ainda não sabe da existência da função soma. Antes a declaração da função estava em cima e assim o compilador já sabia onde estava a declação da função
	//Agora a declaração está embaixo e ocorre erro, pois o compilador não sabe ainda quem é e onde está declarada a função soma.
	//tudo isso porque é TOP-DOWN

// >>>> 100 e 500 são argumentos que o parametro da funcao irá receber <<<<
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

// >>>> num1 e num2 são os parametros da função <<<<
float soma(float num1, float num2)
{
	return (num1 + num2);
}
