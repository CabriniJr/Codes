#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("Qual tabuada você quer?");
	scanf("%d", &num);
	printf("\n\nTabuada do %d\n\n",num);
	for(int i = 0; i <= 10; i++)
	{
		int resul = i * num;
		printf("%d X %d = %d\n",i,num,resul);
		
	}
}