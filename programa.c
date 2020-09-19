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
	int numeros[5];
	int i,total=0;
	float promedio=0;
	char arreglo[]={'a','e','i','o','u'};
	struct
			{
				int salud[50],fuerza[50];
				char nombre[70],tipo[70];
			}personaje[5];
	printf("Ingresa el procedimiento a realizar:\n1.- Arreglo de 5 numeros\n2.- Funcion Mostrar\n3.- Estructura personaje\n");
	scanf("%i",&num);
	switch(num)
	{
		case 1:
		for(i=0;i<5;i++)
		{
		printf("Ingresa el numero [%i]: ",i+1);
		scanf("%i",&numeros[i]);
		}
		printf("\nTus numeros son:\n ");
		for(i=0;i<5;i++)
		{
		printf("%i ",numeros[i]);
		total+=numeros[i];
		promedio = total/5;
		}
		printf("\nLa suma es: %i",total);
		printf("\nEl promedio es: %.2f\n",promedio);
		break;
		case 2:
			mostrar(n,arreglo);
		break;
		case 3:
			for(i>=0;i<5;i++)
			{
				printf("Ingresa el nombre del personaje [%i]: ",i+1);
				fflush(stdin); gets(personaje[i].nombre);
				printf("Ingresa el tipo del personaje [%i]: ",i+1);
				fflush(stdin); gets(personaje[i].tipo);
				printf("Ingresa la fuerza del personaje [%i]: ",i+1);
				scanf("%i",&personaje[i].fuerza);
				printf("Ingresa la salud del personaje [%i]: ",i+1);
				scanf("%i",&personaje[i].salud);
			}
		break;
		default:printf("NUMERO INVALIDO");
	}
	system("pause");
}
	
