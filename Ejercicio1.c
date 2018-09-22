//PB16016 <--CARNÉ
#include<stdio.h>
int main(){
	int num1, num2, num=1, opcion;
	int *p1, *p2, *p3;
	do{
		printf("1. Ingresar dos numeros enteros");
		printf("\n");
		printf("2. Calcular su suma utilizando punteros");
		printf("\n");
		printf("3. Calcular su resta utilizando punteros");
		printf("\n");
		printf("4. Imprimir la direccion de memoria de cada variable");
		printf("\n");
		printf("Cualquier numero para salir");
		printf("\n");
		scanf(" %d ", &opcion );
		printf("\n");
		switch(opcion){
			case 1:
				printf("Ingrese el valor del numero 1: ");
				scanf(" %d ", &num1 );
				printf("\n");
				printf("Ingrese el valor del numero 2: ");
				scanf(" %d ", &num2 );
				p2=&num2;
				p3=&num;
				p1=&num1;
				printf("\n");
				break;
			case 2:
				*p3=(*p1)+(*p2);
				printf("La suma utilizando punteros= %d", (*p3));
				printf("\n");
				break;
			case 3: 
				*p3=(*p1)-(*p2);
				printf("La resta utilizando punteros= %d", (*p3));
				printf("\n");
				break;
			case 4:
				printf("El espacio de memoria de a= %p\n", p1);
				printf("\n");
				printf("El espacio de memoria de b= %p\n", p2);
				printf("\n");
				break;
		}
	}while(opcion>0 && opcion<4);

	
}

