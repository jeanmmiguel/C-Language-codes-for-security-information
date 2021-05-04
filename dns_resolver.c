#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h> // para converter para string ipv4 para não aparecer zuado na tela

int main(int argc, char *argv[]){
	
	if(argc <=1){
	printf("Modo e uso: ./dns_resolver www.site.com.br \n");
	}else{
	
	struct hostent *alvo = gethostbyname(argv[1]);
	
	if(alvo == NULL){
		printf("Ocorreu um erro :(  \n");
	}else{

	printf("IP: %s  \n",inet_ntoa(*((struct in_addr *)alvo->h_addr))); // inet_ntoa converter o que esta vindo de h_addr para um formato legivel para exibir
	}
}

}
