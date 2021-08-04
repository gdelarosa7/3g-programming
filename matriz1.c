#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a[3][3];
	int b[3][3];
	
	a[0][0] = 1;
	a[0][1] = 2;
	a[0][2] = 3;
	a[1][0] = 4;
	a[1][1] = 5;
	a[1][2] = 6;
	a[2][0] = 7;
	a[2][1] = 8;
	a[2][2] = 9;
	
	b[0][0] = 11;
	b[0][1] = 12;
	b[0][2] = 13;
	b[1][0] = 14;
	b[1][1] = 15;
	b[1][2] = 16;
	b[2][0] = 17;
	b[2][1] = 18;
	b[2][2] = 19;
	
	printf("%d ", a[1][1]);
	
	a[1][1] = 10;
	printf("%d ", a[1][1]);
	
	a[2][2] = a[2][0] + a[2][1];
	
	printf("%d ", a[2][2]);
	
	float promedio;
	promedio = (a[2][0] + a[2][1] + a[2][2])/3;
	printf("Prom= %f ", promedio);
	
	promedio = (a[0][2] + a[1][2] + a[2][2])/3;
	printf("Prom= %f ", promedio);
	
	int suma;
	suma = (a[0][2] + a[1][2] + a[2][2]);
	printf("suma= %d ", suma);
	
	printf("a %d", a[1][1]);
	printf("b %d", b[1][1]);
	
	suma= a[1][1] + b[1][1];
	printf("suma= %d ", suma);	
	
	int i; //filas
	int j; //columnas
	
	i = 0;
	j = 0;
	
	printf(" elemento= %d", a[i+1][j]);
	printf("\n");
	//manejo mediante ciclos
	// 1 pro fila - el indice i
	for(i=0; i<3; i++){
		printf(" -%d-", a[i][j]);
		
		j=1;
		printf(" -%d-", a[i][j]);
		
		j=2;
		printf(" -%d-", a[i][j]);
		printf("\n");
		j=0;
	}
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf(" -%d-", a[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}

