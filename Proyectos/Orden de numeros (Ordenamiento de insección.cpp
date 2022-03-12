//Ordenamiento por Insercion (#) //https://github.com/LuisCrespoURU/Problema-de-ordenamiento.git
#include <iostream>
#include <stdio.h>
#define D 100

int main (){
	int i,C,P,aux; 
	int Num[D];
	
	printf ("Ingrese la cantidad de numeros a ordenar: ");
	scanf ("%d",&C);
	
	for (i = 0; i < C; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &Num[i]); 
	} 
	
	for (i=0;i<C;i++){ // (#)
		P=i;
		aux= Num[i];
		
		while ((P>0) && (Num[P-1]>aux)){
			Num[P]=Num[P-1];
			P--;
		}
		Num[P]= aux;
	}
	
	printf ("Orden asendente: ");
	for (i=0;i<C;i++){
		printf ("%d", Num[i]);
	}
	
	return 0;
}
