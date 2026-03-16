#include <iostream>

using namespace std;

//omite a atribuição de um argumento ao chamar a função
void imp(string txt="Banana");

int main(){
	
	
	//imp("Banana");
	imp();
	
	//so imprime o valor atribuido no prototipo se a função estiver vazia
	imp("Abacaxi");
	
	return 0;
}

void imp(string txt){
	cout << "\n" << txt << "\n";
}
