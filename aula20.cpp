#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	//pilha <tipo> nome;
	stack <string> cartas;
	
	//verifica se a pilha esta vazia
	//poderia usar if(cartas.size() == 0)
	if(cartas.empty()){
		cout << "Pilha vazia\n\n" ;
	}else{
		cout << "Pilha com cartas";
	}
	
	//adiciona elementos a pilha
	cartas.push("Rei de Copas"); //carta do fundo da pilha
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus"); //carta do topo da pilha
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta do topo: " << cartas.top() << "\n";
	
	cartas.pop(); //retira um elemento da pilha
	//sempre tira o elemento do topo
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Nova carta do topo: " << cartas.top() << "\n";
	
	//deixa a pilha vazia
	while(!cartas.empty()){
		cartas.pop();
	}
	
	return 0;
}
