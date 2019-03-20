#include <stdio.h>

int main(int argc, char **argv){
	int arreglo [10] = {2,14,5,7,1,34,10,9,22,50};
	int indice, k , aux;
	for(indice=0;indice<10;indice++){
		for(k=0;k<10;k++){
			if(arreglo[k]>arreglo[k+1]){
				aux = arreglo[k];
				arreglo[k] = arreglo[k+1];
				arreglo[k+1] = aux;
			}
		}
	}
	printf("El arreglo en orden es:\n");
	for(indice=0;indice<10;indice++){
		printf("Elemento[%d]: %d\n",indice,arreglo[indice]);
	}
	return 0;
}

