#include <iostream>

using namespace std;

int main(){
	
	/*switch(expressão){ //expressão = valor a ser testado
		
		case const1: //valor testado é comparado com a constante dos cases 
			comandos; //quando o valor é o mesmo, ele passa pelos comandos e o switch para no break
			break; 
			
		case const2:
			comandos;
			break;
			
		default: //o valor vem para o default caso nenhuma das contantes seja igual a expressão
			comandos;
		
	}*/
	
	int x;
	
	cout << "Selecione uma cor: " << "\n";
	cout << "[1]=verde, [2]=azul, [3]=vermelho\n";
	
	cin >> x; //le um valor do teclado e armazena na variavel
	
	switch(x){
		
		case 1:
			cout << "cor selecionada: verde\n";
			break;
			
		case 2:
			cout << "cor selecionada: azul\n";
			break;
			
		case 3:
			cout << "cor selecionada: vermelho\n";
			break;
			
		default:
			cout << "valor selecionado invalido\n";
	}	
	
	int y;
	cout << "Selecione uma cor\n";
	cout << "[1,2,3]=roxo, [4,5,6]=amarelo\n";
	
	cin >> y;
	
	switch(y){
		case 1:
		case 2:
		case 3:
			cout << "cor selecionada: roxo\n";
			switch(y){
				case 1:
					cout << "Claro\n";
					break;
					
				case 2:
					cout << "normal\n";
					break;
					
				case 3:
					cout << "Escuro\n";
					break;
						
			}
			break;
			
			
		case 4:
		case 5:
		case 6:
			cout << "cor selecionada: amarelo\n";
			break;
	}
	cout << "\nPrograma finalizado\n";
	
	system("pause");
	return 0;
}