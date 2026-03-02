#include <iostream>

using namespace std;

int main(){
	
	//tipo, nome da variável e seu valor
	
	int numero=0;      //int recebe valores inteiros
	char letra='B';      //char recebe letras como 'B'
	char letras[20];      //recebe 20 letras //estudaremos isso em vetores
	double decimal=7.2;      //2.4999999
	float decimal2=8.4;      //2.5 (menos preciso que o double)
	bool vivo=true;      //recebe valor True or False //bool de booleano
	string nome="Silvestre";      //recebe textos "Banana"
	
	
	cout << "digite um numero: ";
	cin >> numero; // entrada
	cout << "digite uma letra: ";
	cin >> letra;
	cout << "dinheiro: ";
	cin >> decimal;
	cout << "digite seu nome: ";
	cin >> nome;
	
	vivo=false;
	
	cout << "\nnumero:" << numero << "\nletra:" << letra << "\ndecimal:" << decimal << "\ndecimal2:" << decimal2 << "\nvivo:" << vivo << "\nnome:" << nome << "\n";	
	
	system("pause");
	return 0;
}