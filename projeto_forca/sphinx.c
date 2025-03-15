#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//by CabriniJr
int main() 
{
	printf("		     		      88          88                                   \n");
	printf("			    	      88          \"\"                                 \n"); 
	printf("				      88                                                   \n");
	printf("		,adPPYba, 8b,dPPYba,  88,dPPYba,  88 8b,dPPYba,  8b,     ,d8       \n");
	printf("		I8[    \"\" 88P'    \"8a 88P'    \"8a 88 88P'   `\"8a  `Y8, ,8P'   \n");
	printf("		 `\"Y8ba,  88       d8 88       88 88 88       88    )888(         \n");
	printf("		aa    ]8I 88b,   ,a8\" 88       88 88 88       88  ,d8\" \"8b,     \n");
	printf("		`\"YbbdP\"' 88`YbbdP\"'  88       88 88 88       88 8P'     `Y8    \n");
	printf("			  88                                                           \n");
	printf("			  88                                                           \n");
	printf("				  	                                                       \n");
	printf("	               ___                                                     \n");
	printf("                     . /// .                                               \n");
	printf("                    /|<> <>!\\                                             \n");
	printf("                   /-|  ^  !-\\                                            \n");
	printf("                  /-- \\_=_/ --\\                                          \n");
	printf("                  )---| W |---(                                            \n");
	printf("                /-\\--| W |--/-\\                                          \n");
	printf("                (_-_--|_-_|--___)                                          \n");  
	printf("               (-___  -_-- _-- -_)                                         \n");
	printf("               )-_ _--_ _ ___--__|                                         \n"); 
	printf("               (___ --__  __ __--(                                         \n");  
	printf("              /-_  / __ -_ -__  \\_\\                                      \n");
	printf("             _>/  -- /|___| _ \\ -_ )                                      \n"); 
	printf("            /--  _ - _/ _ \\>\\ -  -- \\                                   \n");
	printf("           ( / / /   > |~l \\   \\ \\ \\_)                                 \n"); 
	printf("        jjs| |-' | |/  \"\"\"  \\| |   |_|                                 \n");
	printf("           L_|_|_|_/         L_L_|_l_)                                     \n");
	printf("\n\n Regras: Escolhas número de 0 a 99, digite apenas números\n");
	int t;
	int acertou = 0;
	int nivel;
	srand(time(0));
	
	double pontos = 1000;	
	
	int num_sec = (rand() % 100);//Randomizador 
	
	//Dificuldade
	printf("Escolha a dificuldade\nFácil(1) Médio(2) Difícil(3)\n");
	printf("Escolha:");
	scanf("%d",&nivel);
	int tentativas = 1;
	switch(nivel){
		case 1:
			tentativas = 20;
			break;
		case 2:
			tentativas = 15;
			break;
		default:
			tentativas = 6;
			break;
	}
	for(int i = 1; i<=tentativas;i++){	
		t = (tentativas-i)+1;
		int chute;  
		printf("------------------------");
		printf("\nTentativas restantes:%d\nQual é seu chute: ",t);
		scanf("%d", &chute);			
		acertou = (chute == num_sec);
		int maior = chute > num_sec;
		int menor = chute < num_sec;
		
		if(chute < 0){	
		printf("Digite números maiores que 0");
		tentativas++;
		continue;
		}	
		
		if(acertou){
			break;
		}
		else if(maior){
			printf("\nSeu chute foi maior\n\n");
		}
		else{
			printf("\nSeu chute foi menor\n\n");
			
		}	
		double pontosperdidos = abs((chute - num_sec)/2.0);
		pontos = pontos - pontosperdidos;
	}
	if(acertou){
		printf("\nParabéns você ganhou!!!\n");
		printf("Pontuação:%.1f\n",pontos);
	}
	else{
		printf("Você perdeu, tente novamente!\n");
	}

}

