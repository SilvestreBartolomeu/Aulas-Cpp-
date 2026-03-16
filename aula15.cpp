#include <iostream>

using namespace std;


//para o programa reconhecer a funcao texto e preciso fazer um prototipo dela antes do main
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

//essa é a função principal do codigo
//o proprio sistema chama ela e recebe o valor 0
int main(){
	
	int res;
	string transp[4] = {"carro", "moto", "barco", "aviao"};
	
	for(int i = 0; i < 3; i++){
		texto();
	}
	
	soma(15, 5);
	res = soma2(175, 25);
	
	cout << "Valor de res: " << res << "\n";
	
	tr(transp);
	
	return 0;
}

//tipo nome(argumentos){
//void nao retorna nada quando for chamado
void texto(){
	cout << "\nBanana Verde\n";
}

void soma(int n1, int n2){
	cout << "Soma dos valores: " << n1+n2 << "\n";
}

int soma2(int n1, int n2){
	return n1+n2;
}

//passando um vetor para a funcao
void tr(string tra[4]){
	for(int i = 0; i < 4; i++){
		cout << tra[i] << "\n";
	}
}
