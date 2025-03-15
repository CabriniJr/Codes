#define TAMANHO_PALAVRA 20

void abertura();
void chuta();
int jachutou(char letra);
void desenhaforca();
void escolhepalavra();
int enforcou();
int acertou();
void adicionapalavra();
int chuteserrados();

void prperdeu(){
	printf("	Puxa, você foi enforcado!	\n\n");
	printf("	    _______________           \n");	
	printf("	   /               \\         \n");
	printf("	  /                 \\        \n");
	printf("	//                   \\/\\    \n");
	printf("	\\|   XXXX     XXXX   | /     \n"); 
	printf("	 |   XXXX     XXXX   |/       \n");
	printf("	 |   XXX       XXX   |        \n");
	printf("	 |                   |        \n");
	printf("	 \\__      XXX      __/       \n");
	printf("	   |\\     XXX     /|         \n");
	printf("	   | |           | |          \n");
	printf("	   | I I I I I I I |          \n");
	printf("	   |  I I I I I I  |          \n");
	printf("	   \\_             _/         \n");
	printf("	     \\_         _/           \n");
	printf("	       \\_______/             \n");
}		  

void prganhou(){		   
	printf("	Parabéns, você ganhou!	\n\n");
	printf("	       ___________        \n"); 	
	printf("	      '._==_==_=_.'       \n");
	printf("	      .-\\:      /-.      \n"); 
	printf("	     | (|:.     |) |      \n");
	printf("	      '-|:.     |-'       \n");
	printf("	        \\::.    /        \n");
	printf("	         '::. .'          \n");
	printf("	           ) (            \n");
	printf("	         _.' '._          \n");
	printf("	        '-------'         \n");
}