#include <iostream>

using namespace std;

int main(){
	//array
	int vetor[5]; //cinco posicoes do vetor, como se fosse int vetor0, vetor1, vetor2, ..., vetor4;
	int i;        //vetor[5]={10, 20, 30 ,40 ,50} ja adiciona os valores
	//nome array[posição]=valor
	vetor[0]=10;
	vetor[1]=20;
	vetor[2]=30;
	vetor[3]=40;
	vetor[4]=50;
	//vetor[10]=100; nao existe, pois so vai ate o 9
	
	
	for(i=0; i<5; i++){
		cout << vetor[i] << "\n"; 
	}

	for(i=0; i<sizeof(vetor)/4; i++){   //sizeof retorna  tamanho do array em bites. Como int tem 4 bites, dividimos por 4
		cout << vetor[i] << "\n";
	}
	
/*	int tamanho=5, vetor2[tamanho], j;
	for(j=0; i++){
		cout << vetor[i] << "\n";
	}
*/	
	system("pause");
	return 0;
}
