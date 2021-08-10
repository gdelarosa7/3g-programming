#include <stdio.h>

char caracter;

int main(int argc, char *argv[]) {
	
	FILE *file_pointer = NULL;
	
	file_pointer = fopen("/Users/Dr.GdelaRosa/Desktop/PROGRAMACION/cuento.rtf","r");
	if(file_pointer == NULL){
		printf("Error: No se encuentra el archivo");
		return -1;
	}
	printf("\nEl contenido del archivo de prueba es \n\n");
	while((caracter = fgetc(file_pointer)) != EOF){
		printf("%c",caracter);
	}
	fclose(file_pointer);

		return 0;
}

