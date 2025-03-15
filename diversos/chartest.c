#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para calcular o subtração entre dois elementos
float subentre(float valores[],int opcao) {  
    float result;
     switch(opcao){
		case 1://dois valores sem resultado
		result= valores[0]-valores[1];
		break;
		
		case 2://resultado e valor 1 
		result = valores[0]+valores[1];
		break;
		
		default://resultado e valor 2
		result = valores[0]+valores[1];
	 }
    return result;
}
// Função para calcular a divisão de dois elementos
int divi(int a, int b) {
	float result;
	result = a/b;
	return result;
}
// Função para calcular função horaria (primeior grau)
float pgrau(float valores[],int opcao){
	float result;

	switch(opcao){
		case 1://s, s0, a
		printf("Sem o tempo\n");
		result = (float)(valores[0]-valores[1])/valores[2];
		break;
		default://s0, a,ta
		printf("Sem space\n");
		result = valores[0]+valores[1]*valores[2];
	}
	return result;
}
void main() { 
    //Banco de nomes chaves
	char *palavraschave[] = {"Deslocamento","Velocidade","Escalar média","Função","Horária"};
	printf("Calculadora física\n");
	printf("O que você deseja calcular\n 1. Deslocamento\n 2.Velocidade escalar média\n 3.Aceleração escalar média\n 4.Equação horaria do espaço\n 5. Função horaria da velocidade\n");
	printf("Escolha: ");
	//Seletor de conta
	int op;
	scanf("%d", &op);
	
	switch (op){
		case 1:
		float valores[2];
		int opcao;
		printf("\n\nDeslocamento ΔS=S-S0\n\nSelecione a opção\n 1.?=S-S0\n 2.ΔS=S-?\n 3.ΔS=?-S0\n");
		scanf("%d",&opcao);
		printf("Digite os dois valores:");
		for(int i = 0;i < 2;i++){
			scanf("%f", &valores[i]);
			
		}
		
		printf("Resultado: %2.f",subentre(valores,opcao));
		break;
		default:
			printf("opção invalida");
			break;
	
	}
	
		
	
		
		
}