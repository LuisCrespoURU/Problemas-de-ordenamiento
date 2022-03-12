//Metodo de burbuja (#) //https://github.com/LuisCrespoURU/Problema-de-ordenamiento.git
#include <iostream>
#include <stdio.h>
#define D 100

int main (){
	int i,j,C,aux; 
	int Num[D];
	
	printf ("Ingrese la cantidad de numeros a ordenar: ");
	scanf ("%d",&C);
	
	for (i = 0; i < C; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &Num[i]); 
	} 
	
	for (i=0;i<C;i++){ //#
		for (j=0;j<C;j++){
			if (Num[j] > Num[j+1]){
				aux = Num[j];
				Num[j]=Num[j+1];
				Num[j+1]= aux;
			}
		}
	}
	
	printf ("Orden asendente: ");
	for (i=0;i<C;i++){
		printf ("%d", Num[i]);
	}

	return 0;
}
