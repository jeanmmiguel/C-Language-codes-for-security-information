0#include <stdio.h>
#include <stdlib.h>

int main(void){
	int porta;
	char ip[5];

	printf("Pentest Security \n ");
	printf("Digite o IP \n");
	scanf("%s",&ip);

	printf("Digite a porta  \n");
	scanf("%d",&porta);
	printf("Varrendo host: %s  na porta %i \n",ip,porta);
	return 0;


}
