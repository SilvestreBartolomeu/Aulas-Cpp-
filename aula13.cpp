#include <iostream>

using namespace std;

int main(){
	
	int matriz[3][4]; // 3 linhas e 4 colunas
	int linha, coluna;
	
	/*
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<4; coluna++){
			matriz[linha][coluna]=linha;
		}
	} // faz o que esta logo abaixo
	
	
	matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;
	
	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;
	
	matriz[2][0]=2;
	matriz[2][1]=2;
	matriz[2][2]=2;
	matriz[2][3]=2;
	*/
	
	//é preciso de um for para cada dimensao, um dentro do outro
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<4; coluna++){
			cin >> matriz[linha][coluna];
		}
		cout << "\n";
	}
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<4; coluna++){
			cout << matriz[linha][coluna] << " ";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
