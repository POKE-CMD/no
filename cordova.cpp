#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

int opera();
int numalet();
int suma();
int resta();
int producto();
int division();
int numord();
int ascii();
int prime();
int nombre();
int namecomplet();

int main()
{
	
    //numalet();
	//nombre();
	//namecomplet();
    //prime();
    //ascii();
	//suma();
	//resta();
    //producto();
    //division();	
    opera();
    //numord();
}

int nombre(){ 
	char nombre[100];
	printf (" Escribe tu nombre completo :");
	gets (nombre);
	int longitud=strlen(nombre);
	printf (" Este es tu nombre  alrevez:");
	for (int i=longitud-1;i>=0;i--){
        printf ("%c",nombre[i]);}
    return(0);	
}       
int namecomplet(){ 
	char namecomplet[100];
	printf ("Escribe tu nombre completo: ");
	gets (namecomplet);
	printf ("         Tu nombre es este:%s ",namecomplet);
    return(0);	
}       
int numord() {
	for (int a=1;a<=101;a++){
	    printf ("%d,",a);
    	}return(0);
}	
int numalet(){
	int j,u,d,c,m;   
    printf("\tDame un numero: ");
    scanf("%d",&j);
     if(j<0||j>1000){ 
	 printf("\n\n\tEl numero no puede ser mayor a 1000 o menor a 0\n\n");
	 exit(0);
	 } 
    m=(j/1000)%10;
    c=(j/100)%10;
    d=(j/10)%10;
    u=(j/1)%10;
     if(j>=11||j<=19){
	switch (j){
    case 11:
	printf ("\tonce");
	break;
	case 12:
	printf ("\tdoce");
	break;
	case 13:
	printf ("\ttrece");
	break;
	case 14:
	printf ("\tcatorce");
	break;
	case 15:
	printf ("\tquince");
	break;
	case 16:
	printf ("\tdieciseis");
	break;
	case 17:
	printf ("\tdiecisiete");
	break;
	case 18:
	printf ("\tdieciocho");
	break;
	case 19:
	printf ("\tdiecinueve");
	break;
	default:
	printf (" ");}
}	
    switch (m){
	case 1:
	printf ("\t MIL ");
	break;
	default:
	printf (" ");
	}
    switch (c){
	case 1:
	printf ("cien ");
	break;
	case 2:
	printf ("docientos ");
	break;
	case 3:
	printf ("trecientos ");
	break;
	case 4:
	printf ("cuatrocientos ");
	break;
	case 5:
	printf ("quinientos ");
	break;
	case 6:
	printf ("seiscientos ");
	break;
	case 7:
	printf ("setecientos ");
	break;
	case 8:
	printf ("ochocientos ");
	break;
	case 9:
	printf ("novecientos ");
	break;
	default:
	printf (" ");
	}
    switch (d){
	case 1:
	printf ("diez ");
	break;
	case 2:
	printf ("veinte ");
	break;
	case 3:
	printf ("treinta ");
	break;
	case 4:
	printf ("cuarenta ");
	break;
	case 5:
	printf ("cincuenta ");
	break;
	case 6:
	printf ("sesenta ");
	break;
	case 7:
	printf ("setenta ");
	break;
	case 8:
	printf ("ochenta ");
	break;
	case 9:
	printf ("noventa ");
	break;
	default:
	printf (" ");
	}
	switch (u){
	case 1:
	printf ("uno ");
	break;
	case 2:
	printf ("dos ");
	break;
	case 3:
	printf ("tres ");
	break;
	case 4:
	printf ("cuatro ");
	break;
	case 5:
	printf ("cinco ");
	break;
	case 6:
	printf ("seis ");
	break;
	case 7:
	printf ("siete ");
	break;
	case 8:
	printf ("ocho ");
	break;
	case 9:
	printf ("nueve ");
	break;
	default:
	printf (" ");}
	return 0;	
}
int prime(){


    int num,i,primo=1;
    printf("Dame un numero entero positivo: ");
    scanf("%d",&num);
    if (num<0){
        printf("\nEl numero tiene que ser un numero entero positivo.\n");
    }
    if (num==0||num==1){
        printf("\nEl numero %d no es primo.\n",num);
   } 
    for (i=2;i<=sqrt(num);i++){
        if (num%i==0){
            primo=0;}
    }
    if (prime){
        printf("\nEl numero %d es primo.\n",num);}
    else{
        printf("\nEl numero %d no es primo.\n",num);
    }return (0);
	}
int ascii(){
	for (int a=0;a<=256;a++){
	    printf ("%d: %c",a,a);
	}return(0);
}
int suma(){
   int c,a,b;
   printf ("DAME UN NUMERO A: ");
   scanf ("%d\n",&a);
   printf ("DAME UN NUMERO B: ");
   scanf ("%d\n",&b);
   c=a+b;
   printf ("\n\n\t\t\tEl resultado de la suma es:%d\n",c);
   return (0);
 }	
int resta(){ 
   int c,a,b;
   printf("DAME UN NUMERO A: ");
   scanf("%d\n",&a);
   printf("DAME UN NUMERO B: ");
   scanf("%d\n",&b);
   c=a-b;
   printf("\n\n\t\t\tEl resultado de la resta es:%d\n",c);
   return (0);			
}	
int producto(){
   int c,a,b;
   printf ("DAME UN NUMERO A: ");
   scanf ("%d\n",&a);
   printf ("DAME UN NUMERO B: ");
   scanf ("%d\n",&b);
   c=a*b;
   printf ("\n\n\t\t\tEl resultado del producto es:%d\n",c);
   return (0);		
}	
int division(){
   int c,a,b;
   printf("DAME UN NUMERO A: ");
   scanf("%d\n",&a);
   printf("DAME UN NUMERO B: ");
   scanf("%d\n",&b);
   c=a/b;
   printf("\n\n\t\t\tEl resultado de la division es:%d\n",c);	
   return (0);
   }	
int opera()
    {float a,b,c;
    printf ("\t\t\t D=(((A-B*C-A)/(A-C*B+A)*A-2))");
    printf ("DAME UN VALOR ENTERO PARA A:");
    scanf  ("%f",&a);
    printf ("DAME UN VALOR ENTERO PARA B:");
    scanf  ("%f",&b);
    printf ("DAME UN VALOR ENTERO PARA C:");
    scanf  ("%f",&c);
    float d=(((a-b*c-a)/(a-c*b+a)*a-2));
    printf ("\n\n\t\t\tEl resultado de la operacion es:%f",d);
  
return (0);}
	
	
 

