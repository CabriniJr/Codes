#include <stdio.h>
#include <stdlib.h>

int linhas;
int colunas;
char** mapa;

int main(void){
	
	
	FILE* f;
	f =fopen("mapa.txt","r");
	if(f == 0){
		printf("Erro na leitura");
		exit(1);
		
	}
	mapa = malloc(sizeof(char*) * linhas);
	for(int i = 0; i< linhas; i++){
		mapa[i] = malloc(sizeof(char)*(colunas+1));
		
	}
	
	
	for(int i = 0; i < 4; i++){
		fscanf(f,"%s", mapa[i]);
		
	}
	
	for(int i =0; i<=5; i++){
		printf("%s\n",mapa[i]);
	}
	for(int i = 0; i < linhas; i++){
		free(mapa[i]);
	}
	
	
	fclose(f);
}