#include <iostream>
#include <string.h>

using namespace std;


//primeiro parametro armazena quantidade de argumentospassados
//segundo parametro armazena os argumentos
//primeiro argumento é o nome do programa
int main(int argc, char *argv[]){
	
	//primeiro argumento é o nome do programa
	cout << argv[0] << "\n";
	//é possivel passar um argumento pelo prompt de comando e executar dentro do mesmo
	cout << argv[1] << "\n";
	cout << argc << "\n";
	
	
	//identifica se foram enviados parametros
	if(argc > 1){
		//se as strings forem iguais ele retorna 0 (false), se nao, retorna 1 (true)
		//if funciona quando retorna 1 (true)
		//! = not
		if(!strcmp(argv[1], "sol")){
			cout << "Vou ao clube. \n\n";	
		}else if(!strcmp(argv[1], "nublado")){
			cout << "Vou ao cinema. \n\n";
		}else{
			cout << "Vou ficar em casa. \n\n";
		}
		
	}
	
	//é possivel colocar um argumento por um atalho do arquivo executavel
	//é preciso do system pause
	system("pause");
	return 0;
}

