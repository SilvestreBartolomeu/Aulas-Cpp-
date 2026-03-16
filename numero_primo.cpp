#include <iostream>
#include <cmath>

using namespace std;

bool primo(int numero);

int main(){
	
	cout << primo(7);

	return 0;
}

bool primo(int numero){
	
	if(numero < 2){
		return false;
	}
	
	for(int i = 2; i < int(pow(numero, 0.5)) + 1; i++){
		if(numero%i == 0){
			return false;
		}
	}
	
	return true;
	
}
