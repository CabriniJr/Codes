#include <stdio.h>

void soma(int numeros[10]){
	int resultado = 0;
	for(int i = 0;i <= numeros[10];i++){
		resultado = resultado + numeros[i];
	}
	printf("Resultado:%d\n",resultado);
}

void main(){
	int numeros[10];
	for(int i = 1; i <= numeros[10]; i++){
		numeros[i] = i;
	}
	soma(numeros);
}