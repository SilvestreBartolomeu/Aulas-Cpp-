#include <iostream>

using namespace std;

int main(){
	
	enum frutas{banana, abacaxi, limao, laranja};
	//atribui valores as frutas comecando em 0
	//se colocarmos banana = 100, as proximas variaveis serao 101, 102, 103
	//podemo atribuir um valor para cada fruta igual fizemos com banana = 100
	
	frutas fruta_selecionada;
	//fruta selecionada é uma variavel do tipo frutas
	
	fruta_selecionada = limao;
	
	cout << fruta_selecionada;
	
	return 0;
}
