#include <stdio.h>
#include <conio.h>
/*
Ejemplo (lectura de los datos almacenados con fprintf, los datos están 
separados por un tabulador).
*/

int main(int argc, char *argv[]) {
	
	int n=1;
	char nombre[80];
	double salario;
	FILE *pArchivo;
	pArchivo=fopen("/Users/Dr.GdelaRosa/Desktop/PROGRAMACION/empleados.txt","r");
	if(pArchivo!=NULL){
		while(!feof(pArchivo)){
			fscanf(pArchivo,"%d\t%s\t%lf\n",&n,nombre,&salario);
			printf("%d\t%s\t%lf\n",n,nombre,salario);
		}
		fclose(pArchivo);
		getch();
	}
	return 0;
}

