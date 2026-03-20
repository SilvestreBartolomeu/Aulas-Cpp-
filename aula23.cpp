#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list <int> aula;
	int tamanho = 10;
	
	aula.push_front(9);
	aula.push_front(0);
	aula.push_front(5);
	aula.push_front(3);
	aula.push_front(7);
	aula.push_front(2);
	aula.push_front(8);
	aula.push_front(1);
	aula.push_front(4);
	aula.push_front(6);
	
	
	cout << "Tamanho da Lista: " << aula.size() << "\n\n";
	
	aula.sort();
	//ordena a lista do menor para o maior
	aula.reverse();
	//inverte a lista
	
	tamanho = aula.size();
	
	for(int i = 0; i < tamanho; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	return 0;
}
