#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	double p1, p2,atv, atvf, porc, rec1, med1, medf1, medprova1, medfprova1, rec2, med2, medf2, notafinal;
	char opc1, opc2, opc3, opc4, opc5, opc6;
	string res;
	
	inicio:
		
	system("cls");
	
	cout << "Digite o valor da Prova 1: ";
	cin >> p1;
	cout << "Digite o valor da Prova 2: ";
	cin >> p2;
	
	cout << "Digite o valor da media final necessario para passar na materia: ";
	cin >> notafinal;
	
	cout << "Digite se a media possui outras atividades alem das duas provas: [s/n] ";
	cin >> opc1;
	
	if(opc1 == 'S' or opc1 == 's'){
		cout << "Digite a porcentagem que as atividades ocupam na media em numeros decimais (use . no lugar de ,): ";
		cin >> porc;
		cout << "Digite o valor total das atividades (de 0 a 10): ";
		cin >> atv;
		
		atvf = atv*porc;
		medprova1 = ( (p1+p2)/2 )*(1-porc);
		med1 = atvf+medprova1;
		
		cout << "\nNota final das atividades: " << atvf;
		cout <<"\nNota final da media das provas: " << medprova1;
		cout <<"\nMedia: " << med1;
		
		cout << "\n\nDigite se tera recuperacao: [s/n] ";
		cin >> opc2;
		
		if(opc2 == 'S' or opc2 == 's'){
			cout << "\nDigite A se a media final for a media da recuperacao com a media anterior e digite B se a recuperacao substituira a menor nota: ";
			cin >> opc3;
			
			cout << "\nDigite a nota da recuperacao: ";
			cin >> rec1;
			
			if(opc3 == 'A' or opc3 == 'a'){
				medf1 = (med1 + rec1)/2;
				
				cout << "\nMedia final: " << medf1 << "\n\n";
				
				(medf1 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
				
				cout << "Situacao final: " << res << "\n\n";
				
			}else{
				if( (rec1>p1 or rec1>p2) and (p1 > p2) ){
					medfprova1 = ( (rec1 + p1)/2 )*(1-porc);
					medf1 = atvf+medfprova1;
					
					cout << "\nNota final da media das provas com a recuperacao: " << medfprova1;
					cout << "\nMedia final: " << medf1 << "\n";
					
					(medf1 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
					
					cout << "Situacao final: " << res << "\n\n";
					
				}else if( (rec1>p1 or rec1>p2) and (p1 < p2) ){
					medfprova1 = ( (rec1 + p2)/2 )*(1-porc);
					medf1 = atvf+medfprova1;
					
					cout << "\nNota final da media das provas com a recuperacao: " << medfprova1;
					cout << "\nMedia final: " << medf1 << "\n\n";
					
					(medf1 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
					
					cout << "Situacao final: " << res << "\n\n";
					
				}else{
					cout << "\nMedia final: " << med1 << "\n\n";
					
					(med1 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
					
					cout << "Situacao final: " << res << "\n\n";
				}
			}
		}else{
			cout << "\nMedia final: " << med1 << "\n\n";
			
			(med1 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
			
			cout << "Situacao final: " << res << "\n\n";
		}
		
	}else{
		med2=(p1+p2)/2;
		
		cout << "\nMedia:" << med2 << "\n";
		
		cout << "\nDigite se tera recuperacao: [s/n] ";
		cin >> opc4;
		
		if(opc4 == 'S' or opc4 == 's'){
			cout << "\nDigite A se a media final for a media da recuperacao com a media anterior e digite B se a recuperacao substituira a menor nota: ";
			cin >> opc5;
			
			cout << "\nDigite a nota da recuperacao: ";
			cin >> rec2;
			
			if(opc5 == 'A' or opc5 == 'a'){
				medf2=(med2 + rec2)/2;
				
				cout << "\nMedia final: " << medf2 << "\n\n";
				
				(medf2 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
				
				cout << "Situacao final: " << res << "\n\n";
				
			}else{
				if( (rec2>p1 or rec2>p2) and (p1 > p2) ){
					medf2=(rec2 + p1)/2;
					
					cout << "\nMedia final: " << medf2 << "\n\n";
					
					(medf2 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
					
					cout << "Situacao final: " << res << "\n\n";
					
				}else if( (rec2>p1 or rec2>p2) and (p1 < p2) ){
					medf2=(rec2 + p2)/2;
					
					cout << "\nMedia final: " << medf2 << "\n\n";
					
					(medf2 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
					
					cout << "Situacao final: " << res << "\n\n";
					
				}else{
					cout << "\nMedia final: " << med2 << "\n\n";
					
					(med2 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
					
					cout << "Situacao final: " << res << "\n\n";
				}
			}
		}else{
			cout << "\nMedia final: " << med2 << "\n\n";
			
			(med2 >= notafinal) ? res="Aprovado/Aprovada" : res="Reprovado/Reprovada";
			
			cout << "Situacao final: " << res << "\n\n";
		}
	}
	
	cout << "Deseja calcular outra media? [s/n] ";
	cin >> opc6;
	
	if(opc6 == 'S' or opc6 == 's'){
		goto inicio;
	}
	
	system("pause");
	return 0;
}