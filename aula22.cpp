#include <iostream>
#include <list>

using namespace std;

int main(){
	
	//lista <tipo> nome(tamanho, valores), nome2(), nome3()...
	list <int> aula, teste;
	int tamanho = 10;
	
	list <int>::iterator it;
	
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	
	for(int i = 0; i < tamanho; i++){
		//colocar valor pela frente
		aula.push_front(i);
		//colocar valor por tras
		//aula.push_back(i);
	}
	
	
	it = aula.begin();
	//iterator comeca no inicio
	advance(it, 5);
	//avanca o iterator ate a posição 5
	
	aula.insert(it, 0);
	//adiciona um 0 na posição 5
	
	aula.erase(--it);
	//remove o 0 adicionado anteriormente
	//--it para remover o numero anterior a nova posição do iterator em relação a lista
	
	//aula.clear();
	//apaga todos os objetos da lista
	
	//aula.empty()
	//verifica se a lista esta vazia
	
	aula.merge(teste);
	//adiciona uma lista dentro de outra lista
	
	cout << "Tamanho da Lista: " << aula.size() << "\n\n";
	
	tamanho = aula.size();
	
	for(int i = 0; i < tamanho; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	cout << "\nTamanho da Lista: " << aula.size() << "\n";
	
	return 0;
}
