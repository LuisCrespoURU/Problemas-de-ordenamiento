#include <iostream>
#include <stdio.h>
#define D 100

int main (){
	int i,j,C,M,
	aux; 
	int Num[D];
	
	printf ("Ingrese la cantidad de numeros a ordenar: ");
	scanf ("%d",&C);
	
	for (i = 0; i < C; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &Num[i]); 
	} 
	
	for (i=0;i<C;i++){ //Ordenamiento por seleción
		M=i;
		for (j=i+1;j<C;j++){
			if (Num[j] < Num[M]){
				M=j;
			}
		}
		aux=Num[i];
		Num[i]=Num[M];
		Num[M]= aux;
	}
	
	printf ("Orden asendente: ");
	for (i=0;i<C;i++){
		printf ("%d", Num[i]);
	}
	printf ("\nOrden desendente: ");
	for (i=C;i>0;i--){
		printf ("%d", Num[i]);
	}
	
	return 0;
}
