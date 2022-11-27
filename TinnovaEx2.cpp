#include <iostream>
#include <list>
#include <conio.h>
#include <locale.h>


using namespace std;



int main(){
	setlocale(LC_ALL,"");
	
	float saltoatual, maiorsalto=0, menorsalto=1, media, somatotal;
	int i,tam, primeirosalto;
	int	contador=1;
	char test;

	list<float> saltos; // criação da lista para saltos
	list<float>::iterator pos;
	char nome[30];

		const char* colocados[100] = { "primeiro", "segundo","terceiro","quarto","quinto" };
	
	tam=5;
	
		
		do{ //loop que solicita o nome e o valor de cada salto
			maiorsalto=0;
			menorsalto=1;
			somatotal=0;
			media=0;
			primeirosalto=1;
			
		cout<< "\nqual nome do atleta?\n";
		cin>>nome;
		if(nome==""){
			break;
		}
		
	for(int j=0; j<tam; j++ ){
		
		cout <<"\nQual foi a distancia do "<< colocados[j] << " salto?\n";
		cin >> saltoatual;
 		
 		 if(j==0){
		 	menorsalto=saltoatual; //ativando variavel com primeiro valor colocado para comparações
			 }else
 		if(saltoatual>maiorsalto){ //comparação dos valores para valor mais alto
 			maiorsalto=saltoatual;
		 }
		else if(saltoatual<menorsalto){ // comparação dos valores para o valor mais baixo
		 	menorsalto=saltoatual;
		 	
		 }
		
		 somatotal+=saltoatual;
		 media=(somatotal-(maiorsalto-menorsalto))/3;//calculo da media dos saltos sem os saltos com maior e menor distancia! 
 			pos=saltos.begin();
 			saltos.insert(pos,saltoatual);
 		
 		
	    
 	}

	cout<<"\n\nmelhor salto: "<<maiorsalto<<"m   \n\n";
	cout<<"menor salto:"<<menorsalto<<"m   \n\n";
	cout<<"media dos demais saltos:"<<media<<"m   \n\n";
	
	cout<<"Resultado final:\n\n";
	cout<<nome <<": "<<media<<"m\n\n";
	system("pause");
	system("cls");
	}while(true);
		cout<<"\n\nEncerrando Sistema";
		
	 return 0;	
	 }	  

		
	