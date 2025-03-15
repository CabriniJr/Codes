#include <stdio.h>
int main(){
	printf("Digite os números da multiplicação\n");
	int x;
	int y;
	scanf("%d \n%d", &x, &y);
	int resultado;
	resultado = x * y;
	printf("\nResultado:%d", resultado);
}