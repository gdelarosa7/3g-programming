#include <stdio.h>
#include <string.h>

//C:\Users\Dr.GdelaRosa\Desktop\PROGRAMACION
int main(int argc, char *argv[]) {
	
	//FILE *fp;     // file pointer 
	FILE *archivo; // el apuntador a el archivo se llama archivo
	char fin[]= "fin";  // array of char se llama fin con la cadena fin
	char frase[60];  // array para guardar las frase, max 60 char
	
	archivo = fopen("/Users/Dr.GdelaRosa/Desktop/PROGRAMACION/registro1.txt","w+"); // 2. se hace el enlace con fp
									      // 1. w+ crea un archivo
	                                      // 3. abre el archivo
	printf("Guardar frases en archivo");
	
	do{
		printf("Ingresa Frase: o (fin)\n");
		gets(frase);   // leeemos de consola la frase
		if(strcmp(frase,fin)==0)
			break;
		fprintf(archivo,"%s\n", frase);
	} while(strcmp(frase,fin)!= 0);
	fclose(archivo);  // cerrar el archivo
	return 0;
}

