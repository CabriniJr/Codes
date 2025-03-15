void imprimevelha();
void debug();
int input(int*linha, int *coluna);
int primeirajogada(int jogo[3][3],int vazio);
int condicaodevitoria(int jogadas[3][3]);

void cabecalho(){
	system("clear");
	printf("	888   d8b        888                   888                    \n");
	printf("	888   Y8P        888                   888                    \n");
	printf("	888              888                   888                    \n");
	printf("	888888888 .d8888b888888 8888b.  .d8888b888888 .d88b.  .d88b.  \n");
	printf("	888   888d88P\"   888       \"88bd88P\"   888   d88\"\"88bd8P  Y8b\n");
	printf("	888   888888     888   .d888888888     888   888  88888888888 \n");
	printf("	Y88b. 888Y88b.   Y88b. 888  888Y88b.   Y88b. Y88..88PY8b.     \n");
	printf("	\"Y888888 \"Y8888P \"Y888\"Y888888 \"Y8888P \"Y888 \"Y88P\"  \"Y8888 \n");
	
}

void pvitoria(){
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

void velha(){
printf("   (                               \n"); 
printf("    \\  _,--._,-.__,         )     \n");  
printf("    / (,  ,       ,`-._    /       \n"); 
printf("   (  ,^--^-. ;--^--/ (    \\      \n"); 
printf("    :'      `/       \\ )   /      \n"); 
printf("    (  o    (   o    |(  \\'       \n"); 
printf("     \\  ,----\\       /(,-.)      \n"); 
printf("    ,'`-\\___  `.___,'  ,. )       \n"); 
printf("  ,'                   __/         \n"); 
printf("  `-.______________   |,---,       \n");  
printf("        `-^;-^--^-'\\  |   '----,  \n");  
printf("          ( \'------\'  .\',-.___/ \n"); 
printf("           ;._____,--' / \\        \n"); 
printf("  -Velha- (           /   \\       \n"); 
printf("          (`-        /     \\      \n"); 
printf("           \\       ,'       \\    \n"); 
printf("          / )  _,-'          \\    \n"); 
printf("         / (,-'       \\       \\  \n"); 
	   
}