#include <iostream>

using namespace std;

void contador(int numero, int cont = 0);

int main(){
	
	contador(20);
	
	return 0;
}

//funcao que chama ela mesma
void contador(int numero, int cont){
	cout << cont << "\n";
	
	if(numero > cont){
		contador(numero, ++cont);
		//incremento antes de cont entrar na funcao
	}
}
