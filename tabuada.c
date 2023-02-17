#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, res;
	
	printf("### Digite um número para gerar a tabuada ###\n\n");
	scanf("%d", & i);
	system("cls");	
	
	for(j = 1; j <= 10; j++){
		res = i * j;
		printf("%d X %d = %d\n", i, j, res);
	}
	
	
}
