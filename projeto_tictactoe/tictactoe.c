#include <stdio.h>
#include <stdlib.h>
#include "tictactoe.h"
int loop = 1;
int jogo[3][3] = {{0,0,0},{0,0,0}};
struct Jogador{
	char nome[50];
	int jogadas[3][3];
	
};	
struct Jogador jogador1;
struct Jogador jogador2;




void imprimevelha(){
	//Função para imprimir a velha, verifica o array global jogo e muda a mascara do caracter de acordo se o espaço está vazio, ou com 1(x) ou com 2(o)
	system("clear");
	printf("   1   2   3 \n");
	printf("     |   |   \n");
	printf(" a %c | %c | %c \n",
	(jogo[0][0] == 1?'X':jogo[0][0] == 2?'O':' '),
	(jogo[0][1] == 1?'X':jogo[0][1] == 2?'O':' '),
	(jogo[0][2] == 1?'X':jogo[0][2] == 2?'O':' ')); 
	
	printf("  ___|___|___\n");
	printf("     |   |   \n");
	printf(" b %c | %c | %c \n",
	(jogo[1][0] == 1?'X':jogo[1][0] == 2?'O':' '),
	(jogo[1][1] == 1?'X':jogo[1][1] == 2?'O':' '),
	(jogo[1][2] == 1?'X':jogo[1][2] == 2?'O':' ')); 
	printf("  ___|___|___\n");
	printf("     |   |   \n");
	printf(" c %c | %c | %c \n",
	(jogo[2][0] == 1?'X':jogo[2][0] == 2?'O':' '),
	(jogo[2][1] == 1?'X':jogo[2][1] == 2?'O':' '),
	(jogo[2][2] == 1?'X':jogo[2][2] == 2?'O':' ')); 
	printf("     |   |   \n");
	printf("\n\n");

}

void debug(){
	//DEBUG para visualizar os arrays de cada jogador
	printf("\nModo DEBUG\n");
	printf("\nJogadas globais\n");
	for(int i = 0; i <3;i++){	
			printf("\n");
			for(int j = 0; j<3;j++){
				printf("%i%i = %i ",i,j,jogo[i][j]);
			}
		}
	printf("\n\nJogadas de %s\n",jogador1.nome);
	for(int i = 0; i <3;i++){
		printf("\n");
			for(int j = 0; j<3;j++){
				printf("%i%i = %i ",i+1,j+1,jogador1.jogadas[i][j]);
			}
		}
	printf("\n\nJogadas de %s\n",jogador2.nome);
	for(int i = 0; i <3;i++){
		printf("\n");
			for(int j = 0; j<3;j++){
				printf("%i%i = %i ",i+1,j+1,jogador2.jogadas[i][j]);
			}
		}
	printf("\n");
	
}



int input(int *linha, int *coluna){
	//Função de input, recebe o valor, transcreve as linhas de char para inteiro e escreve esses valores no espaço da memória das jogadas de cada jogador
	char xx;
	printf("Digite a posição: ");
	scanf(" %c%i",&xx,coluna);
	system("beep -f 1000 -l 500"); 
	//traduz o c para i
	if(*coluna<1 || *coluna > 3){
		printf("Valor inválido");
		return 0;
	}
	switch(xx){
		case 'a':
			*linha = 1;
			break;
		case 'b':
			*linha = 2;
			break;
		case 'c':
			*linha = 3;
			break;
		default:
			printf("Valor inválido\n");
			return 0;
		}	
		
	*linha -= 1;
	*coluna -= 1;
}

int primeirajogada(int jogo[3][3],int vazio){
	//Função para resolver um problema da primeira jogada que eu me esqueci qual era mas funciona
	for(int i = 0; i <3;i++){
		for(int j = 0; j<3;j++){
			if (jogo[i][j] != 0){
				vazio = 0;
				break;
			}
		}	
	}
	return vazio;
}


int condicaodevitoria(int jogadas[3][3]){
	//Avalia os arrays de jogada de cada jogador e varre as linhas, colunas e diagonais para encontrar uma com todos os valores iguais
	for(int i = 0; i< 3; i++){
		if(jogadas[i][0] == jogadas[i][1] && jogadas[i][1] == jogadas[i][2] && jogadas[i][0] != 0){
			return 1;
		}
		if(jogadas[0][i] == jogadas[1][i] && jogadas[1][i] == jogadas[2][i] && jogadas[0][i] != 0) {
			return 1;
		}
	}
	if(jogadas[0][0] == jogadas[1][1] && jogadas[1][1] == jogadas[2][2] && jogadas[0][0] != 0){
		return 1;
	}
	if(jogadas[2][0] == jogadas[1][1] && jogadas[1][1] == jogadas[0][2] && jogadas[2][0] != 0){
		return 1;
	}
	return 0;
}


void main(void){
	int vazio = 1;
	int linha,coluna;
	int vez = 1;
	int rodadas =0;
	cabecalho();
	printf("\n\nBem Vindo ao TicTacToe.c\n");
	printf("Digite o nome do jogador 1: ");
	scanf(" %s",jogador1.nome);
	printf("\nAgora digite o nome do jogador 2: ");
	scanf(" %s",jogador2.nome);
	
	
	do{
		imprimevelha();
		debug();
		if(vez){
			
			printf("\nVez do jogador(a) %s\n", jogador1.nome);
			input(&linha,&coluna);
		
			if(primeirajogada(jogo,vazio)){ //para a primeira jogada 
				jogador1.jogadas[linha][coluna] = 1;
				jogo[linha][coluna] = 1;
				vez--;
				rodadas ++;
			
			}else{
			if(jogo[linha][coluna] == 0){
				jogador1.jogadas[linha][coluna] = 1;
				jogo[linha][coluna] = 1;
				if(condicaodevitoria(jogador1.jogadas)){
					loop = 0;
					vez+10;
					break;
				}
				printf("\n");
				vez--;
				rodadas ++;
			}else{
				printf("\nJogada invalida\n");
				vez = 1;
			}
		}
		
		}else{
			
			printf("\nVez do jogador(a): %s\n",jogador2.nome);
			input(&linha,&coluna);
			
			if(jogo[linha][coluna] == 0){
				jogador2.jogadas[linha][coluna] = 1;
				jogo[linha][coluna] = 2;
				if(condicaodevitoria(jogador2.jogadas)){
					loop = 0;
					vez-10;
					break;
				}
				rodadas ++;
				printf("\n");
				vez++;
			}else{
				printf("Jogada invalida\n");
				vez = 0;
			}
		
		}
	if(rodadas>=9){
		printf("\n\n");
		velha();
		exit(1);
	}
	
		
		
	}while(loop);
	imprimevelha();
	if(vez>0){
		printf("	Parabéns, %s você ganhou!	\n\n",jogador1.nome);
		pvitoria();
	}
	if(vez<0){
		printf("	Parabéns, %s você ganhou!	\n\n",jogador2.nome);
		pvitoria();
	}
	exit(1);
	
	
	
	
		
}