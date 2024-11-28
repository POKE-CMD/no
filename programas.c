#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "portada.h"
#include "codigos.h"

int main(){
    int opciones;
	do{
        //Color de la consola
        system("color 37");
        //Codigo
        portada();
        menu();

		printf("\tCual es tu opcion: ");
		scanf("%d", &opciones);
		system("cls");
		switch(opciones)
		{
			case 1:suma();break;
			case 2:resta();break;
			case 3:multiplicacion();break;
			case 4:division();break;
			case 5:nombrecm();break;
			case 6:printf("hola 6");break;
			case 7:printf("hola 7");break;
			case 8:printf("hola 8");break;
			case 9:printf("hola 9");break;
			case 10:printf("hola 10");break;
			case 11:printf("hola 11");break;
			case 12:printf("hola 12");break;
			case 13:printf("hola 13");break;
			case 14:printf("hola 14");break;
			case 15:printf("hola 15");break;
			case 16:printf("hola 16");break;
			case 17:printf("hola 17");break;
		}
	} while(opciones!=18);
}
