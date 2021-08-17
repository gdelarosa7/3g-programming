#include <stdio.h>
#include <string.h>
char texto[]= "Este es un, ejemplo. de varios delimitadores";
char delim[]=" ,.";
char *token;
	
int main(int argc, char *argv[]) {
	printf("Texto: %s\n", texto);
	token = strtok(texto,delim);
	do{
		printf("%s\n", token);
		token = strtok(NULL,delim);
	} while(token != NULL);
	
	return 0;
}

