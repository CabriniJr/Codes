#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "forca.h"


char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;	


void abertura(){
	system("clear");
	printf("---------------------------------\n");
	printf("---------Jogo de forca-----------\n");
	printf("---------------------------------\n");
	printf("\n\nBem vindo, digite em caixa alta e bom jogo ;)\n\n");
}

void chuta(){
	char chute;
	scanf(" %c", &chute);
	
	chutes[chutesdados] = chute;
	chutesdados++;
}

int jachutou(char letra){
	int achou = 0;
		
	for(int j = 0; j < chutesdados; j++){
		if(chutes[j] == letra) {
			achou = 1;
			break;
		}	
	}	
	
	return achou;
}	

void adicionapalavra() {
    char quer;

    printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
    scanf(" %c", &quer);

    if(quer == 'S') {
        char novapalavra[TAMANHO_PALAVRA];

        printf("Digite a nova palavra, em letras maiúsculas: ");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+");
        if(f == 0) {
            printf("Banco de dados de palavras não disponível\n\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qtd);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novapalavra);

        fclose(f);

    }

}
	

void desenhaforca(){
	
	int erros = chuteserrados();
	printf("  _______      \n");    
	printf(" |/      |     \n"); 
	printf(" |      %c%c%c \n",(erros >=1 ?'(':' '),
	(erros>=1 ? '_':' '), (erros>=1 ? ')':' '));
	printf(" |      %c%c%c \n",(erros >=4?'\\':' '),(erros>=2 ? '|':' '),
	(erros >= 3?'/':' '));
	printf(" |       %c    \n",(erros >= 5 ?'|':' '));
	printf(" |      %c %c  \n",(erros >=6?'/':' '),(erros >=7?'\\':' '));
	printf(" |             \n"); 
	printf("_|___          \n");
	printf("\n\n");	
	
	
	
	
	
	for( int i = 0; i < strlen(palavrasecreta); i++){
		// cod
		int achou = jachutou(palavrasecreta[i]);	
	
		if(achou){
		printf("%c ",palavrasecreta[i]);
		}else {
			printf("_ ");
		}
	}
	printf("\n");
	
}

void escolhepalavra(){
	FILE* f;
	
	f = fopen("palavras.txt","r");
	if( f == 0){
		printf("Falha de banco de dados\n\n");
		exit(1);
	}
	
	int qtddepalavras;
	fscanf(f,"%d", &qtddepalavras);
	
	srand(time(0));
	int randomico = rand()% qtddepalavras;
	
	for(int i = 0; i<= randomico; i++){
		fscanf(f,"%s",palavrasecreta);
	}
	
	fclose(f);
}
int chuteserrados(){
	int erros  = 0;
	
	for(int i = 0; i<chutesdados; i++){
		int existe = 0;	
		for(int j = 0; j< strlen(palavrasecreta); j++){
			if(chutes[i] == palavrasecreta[j]){
				existe = 1;
				break;
			}
		}
		if(!existe) erros++;
	}
	return erros;
}	


int enforcou(){
	return chuteserrados()>=7;
}

int acertou(){
	for(int i = 0; i < strlen(palavrasecreta);i++){
		if(!jachutou(palavrasecreta[i])){
			return 0; 
		}
	}
	return 1;
}


int main(){
	
	escolhepalavra();
	abertura();
	
	do{
		//Começar o jogo
		desenhaforca();
		chuta();
		system("clear");
		
	} while(!acertou() && !enforcou());
	
	if(acertou()){
		prganhou();
	}else{
		prperdeu();
	}
	
	adicionapalavra();
}

