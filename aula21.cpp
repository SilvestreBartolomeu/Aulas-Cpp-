#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	//fila <tipo> nome;
	queue <string> cartas;
	
	cartas.push("Rei de Copas"); //carta do inicio da fila
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus"); //carta do final da fila
	
	cout << "Tamanho da Fila: " << cartas.size() << "\n";
	cout << "Primeira Carta: " << cartas.front() << "\n";
	cout << "Ultima Carta: " << cartas.back() << "\n\n";
	
	
	while(!cartas.empty()){
		cout << "Primeira Carta: " << cartas.front() << "\n";
		cartas.pop();
	}
	
	
	return 0;
}
