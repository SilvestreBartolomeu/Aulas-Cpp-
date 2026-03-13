#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	inicio:
		
	system("cls");
	
	char palavra[30], letra, palavra_secreta[30], letras_usadas[30], continuacao;
	int tentativas=6, tamanho = 0, i = 0, j = 0, l=0;
	bool iguais, acertou;
	
	cout << "Fale para outra pessoa digitar a palavra (todas as letras em maiusculo):  ";
	cin >> palavra;
	system("cls");
	
	while(palavra[i] != '\0'){
		i++;
		tamanho++;
	}
		
	for(i=0; i<tamanho; i++){
		palavra_secreta[i]='_';
		
	}
	
	letras_usadas[0] = '\0';
	palavra_secreta[tamanho] = '\0';
	
	while((tentativas > 0)){
		
		system("cls");
		
		cout << "Voce tem " << tentativas << " tentativas\n\n"; 
		cout << "Palavra: " << palavra_secreta << "\n";
		cout << "Letras Usadas: " << letras_usadas << "\n\n";
		
		cout << "Digite uma Letra em maiusculo: " << "\n";
		cin >> letra;
		
		letras_usadas[l] = letra;
		l++;
		letras_usadas[l] = '\0';
		
		acertou = false;
		
		for(j=0; j<tamanho; j++){
			if(letra == palavra[j]){
				palavra_secreta[j] = letra;
				acertou = true;
			}
		}
		
		if(!acertou){
			tentativas--;
	    }
		iguais = true;
		
		for(i = 0; i < tamanho; i++){
			if(palavra_secreta[i] != palavra[i]){
				iguais = false;
			}
			
		}
		
		if(iguais){
			cout << "\nPalavra: " << palavra_secreta << "\n";
			cout << "Voce Venceu!!!\n";
			break;
		}
		
		if(tentativas == 0){
			cout << "\nVoce Perdeu :(\n";
			cout << "A palavra era: " << palavra << "\n";
		}
	}	
	
	cout << "Deseja jogar novamente? [S/N] ";
	cin >> continuacao;
	
	if(continuacao == 'S' or continuacao == 's'){
		goto inicio;
	}
	
	system("pause");
	return 0;
}