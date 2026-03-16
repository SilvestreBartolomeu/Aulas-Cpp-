#include <iostream>

using namespace std;

//void fatorial(int numero, int contador = 1);
int fatorial(int numero);

int main(){
	
	int valor;
	
	cout << "Digite o valor no qual voce quer saber o fatorial: ";
	cin >> valor;
	cout << "\n" << "O fatorial vale: " << fatorial(valor) << "\n\n";
	
	system("pause");
	return 0;
}

/*void fatorial(int numero, int contador){
	
	if(numero > 1){
		contador *= numero;
		//cout << contador << "\n\n";
		fatorial(--numero, contador);
	}else if(numero == 1){
		cout << contador << "\n\n";
	}
}*/

 fatorial(int numero){
	
	if(numero == 0){
		return 1;
	}
	
	return numero*fatorial(numero - 1);
}
