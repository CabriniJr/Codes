
/****************/
/ Jogo de Forca */
/****************/

  _______       
 |/      |      
 |           
 |           
 |             
 |            
 |              
_|___           


_ _ _ _ _ _ _ _ _ 
Qual letra?

Você errou: a palavra NÃO tem a letra X

  _______       
 |/      |      
 |      (_)  
 |           
 |             
 |            
 |              
_|___           


_ _ _ _ _ _ _ _ _ 
Qual letra?

Qual letra? A
Você acertou: a palavra tem a letra A

  _______       
 |/      |      
 |           
 |           
 |             
 |            
 |              
_|___           


_ _ _ _ _ A _ _ A
Qual letra?

printf("  _______      \n");    
printf(" |/      |     \n"); 
printf(" |      (_)    \n");
printf(" |      \\|/   \n");
printf(" |       |     \n");
printf(" |      / \\   \n");
printf(" |             \n"); 
printf("_|___          \n");
printf("\n\n");


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