#include <stdio.h>
#include <string.h>

//C:\Users\Dr.GdelaRosa\Desktop\PROGRAMACION
int main(int argc, char *argv[]) {
	
	//FILE *fp;     // file pointer 
	FILE *fp; // el apuntador a el archivo se llama archivo
	char frase[60];  // array para guardar las frase, max 60 char
	int i= 0;
	
	fp = fopen("/Users/Dr.GdelaRosa/Desktop/PROGRAMACION/frases.txt","w+"); 
	// 2. se hace el enlace con fp
	// 1. w+ crea un archivo
	// 3. abre el archivo
	printf("prog para escribir y alamacenar en un archivo \n");
	
	do{
		if(i==0)
			printf("Ingresa Frase: o (fin)\n");
		else
			printf("Escribe otra Frase: o (fin)\n");
		gets(frase);   // leeemos de consola la frase
		fprintf(fp,"%s\n", frase);
		i++;
		printf("%s", frase);
	} while(strcmp(frase,"") != 0);
	printf("Salgo del ciclo 1");
	//fclose(fp);
	
	//fp = fopen("/Users/Dr.GdelaRosa/Desktop/PROGRAMACION/frases.txt","r"); 
	rewind(fp);
	printf("Contenido del archivo");
	do{
		fgets(frase,60,fp); // lee del archivo fp, max 60 y lo cpoia en frase
		printf("%s", frase);
	} while(!feof(fp));  //feof--> fin de archivo bolleano, !-negado
	
	fclose(fp);  // cerrar el archivo
	printf("Hasta la vista baby");
	
	return 0;
}


