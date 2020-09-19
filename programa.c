#include<stdio.h>
#include<stdlib.h>
int n,i;
void mostrar(int n,char const *arreglo[])
{
	printf("Ingresa cuantas veces quieres que se muestre en pantalla el arreglo: ");
	scanf("%i",&n);
	for(i=0;i<n;i++)
	{
		printf(arreglo);
		printf("\n");
	}
}

int main()
{
	int num;
	printf("Ingresa el procedimiento a realizar:\n1.- Arreglo de 5 numeros\n2.- Funcion Mostrar\n3.- Estructura personaje\n");
	scanf("%i",&num);
}
	
