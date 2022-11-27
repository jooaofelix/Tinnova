	#include <iostream>
	#include <math.h>
	
	
using namespace std;

struct Comodo{ //criação de struct para cada comodo
    int tipo;
    float largura;
    float comprimento;
};

float CalculaArea(float largura, float comprimento){ // função para calculo de area
	
	return largura * comprimento;
}

float Lampada(float area, float tipopotencia){// calculo da potencia
	
	return (area*tipopotencia)/60;
	
}

 int main(){
    
 	float area, quantidadelampada;
 	float tipopotencia;
 	Comodo comodo;
 	
 		while(true){//inicio do loop
	 
 		std::cout <<"Qual tipo do comodo? Caso deseja sair digite -1 \n";
 		std::cin >>comodo.tipo;	
 		
	 		if(comodo.tipo == -1){//base para saida
	 			std::cout <<" encerrando sistema!";
	 			break;
				 }else{
				 	
					std::cout <<"Qual a largura do comodo?\n";
	 				std::cin >>comodo.largura;
	 		
	 				std::cout <<"Qual o comprimento do comodo?\n";
	 				std::cin >>comodo.comprimento;
	 				
	 				area = CalculaArea(comodo.comprimento,comodo.largura);
	 				
	 				if(comodo.tipo == 0){
	 					tipopotencia =12;
					 }else if(comodo.tipo == 1){
					 	tipopotencia = 15;
					 		}else if(comodo.tipo == 2){
					 				tipopotencia=18;
					 				}else if(comodo.tipo == 3 ){
					 					tipopotencia =20;
									 	}else if(comodo.tipo == 4){
									 		tipopotencia =22;
										 }
	 				
	 				quantidadelampada=Lampada(area, tipopotencia);
	 				
	 				
	 					std::cout <<"Sua Area é de:"<<area<<"!\n e por ser do tipo "<<comodo.tipo<<"\n sera necessario: "<<ceil(quantidadelampada)<<" lampadas de 60Watts! \n\n";
	 			
	 				
					 system("pause");
	 				system("cls");
	 				
 		
 				}
 		}
 
 		
 		
 	
 
 	return 0;
}