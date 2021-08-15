#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n=1; /*N�mero del empleado*/
	char nombre[80];
	double salario;
	FILE *pArchivo;
	
	pArchivo=fopen("/Users/Dr.GdelaRosa/Desktop/PROGRAMACION/empleados.txt","w");
	
	if(pArchivo!=NULL){
		do{
			printf("Introduzca el n�mero de empleado: ");
			scanf("%d",&n);
			/*Solo seguimos si n es positivo, en otro caso
			entenderemos que la lista ha terminado */
			if(n>0){
				printf("Introduzca el nombre del empleado: ");
				scanf("%s",nombre);
				printf("Introduzca el salario del empleado: ");
				scanf("%lf",&salario);
				fprintf(pArchivo,"%d\t%s\t%lf\n",n,nombre,salario);
			}
		}while(n>0);
		fclose(pArchivo);
	}
	
	
	return 0;
}

