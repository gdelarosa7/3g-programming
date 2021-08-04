#include <stdio.h>
// factorial con recurson
int factorial(int numero){
	printf("calculando factorial de %d\n", numero);
	if(numero < 0){
	  return -1;  // si es numero negativo 
	 }else if(numero == 1 || numero == 0 ) // casos base  
	   return 1;                           // para detener la recursion 
	printf("res parcial: %d\n ", numero*factorial(numero-1));
return numero*factorial(numero-1); 
}


int main(int argc, char *argv[]) {
	
	int n, res;
	 n = 3;
	 res = factorial(n);
	 printf(" resultado final %d!= %d\n", n, res);
	 
	 // res = factorial(n);
	// printf(" %d!= %d\n", 6, factorial(6));
	
	return 0;
}

