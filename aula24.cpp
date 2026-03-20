#include <iostream>

using namespace std;

struct Carro{
	string nome, cor;
	int pot, velMax;
};

int main(){
	
	Carro car1, car2;
	
	car1.nome = "Banana";
	car1.cor = "Amarelo";
	car1.pot = 450;
	car1.velMax = 350;
	
	car2.nome = "Limao";
	car2.cor = "Verde";
	car2.pot = 250;
	car2.velMax = 260;
	
	
	cout << "Nome..............: "<< car1.nome << "\n";
	cout << "Cor...............: "<< car1.cor << "\n";
	cout << "Potencia..........: "<< car1.pot << "\n";
	cout << "Veolocidade Maxima: "<< car1.velMax << "\n";
	
	return 0;
}
