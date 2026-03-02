#include <iostream>

using namespace std;

int main(){
	
	int n1=10, n2=50;
	int sol=0;
	char opc='s';
	
	
	if(n1 < n2){
		cout << "Resultado verdadeiro\n";
	}else{
		cout << "Resultado falso\n";
	}
	
	//quando é 0 ou 1, não precisa colocar o valor da variavel como if(sol==1)
	if(sol){
		cout << "Dia ensolarado\n";
	}else{
		cout << "Dia nublado\n";
	}
	
	system("pause");
	return 0;
}