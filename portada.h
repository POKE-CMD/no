int portada();
int centrar();
int encabezado();
int menu();

int portada(){
    centrar("PORTADA: ");
}
int menu(){
    printf("\n\n\t1. Suma de dos numeros\n");
    printf("\t2. Resta de dos numero\n");
    printf("\t3. Multiplicacion de dos numeros\n");
    printf("\t4. Division de dos numeros\n");
    printf("\t5. Nombre completo de una persona\n");
    printf("\t6. Solicitar un numero entero, flotante y double\n");
    printf("\t7. Utilizar esos numeros con tabuladores\n");
    printf("\t8. Dibujar 319 en pantalla con ASCII\n");
    printf("\t9. Lista de numeros ordenados\n");
    printf("\t10.Realizar a={((b-c*d-e)/(e-d*c+a*e-2)]} con enteros\n");
    printf("\t10. Realizar a={[(b-c*d-e)/(e-d*c+a*e-2)]} con flotantes\n");
    printf("\t11.Compara si es mayor suma o producto de dos numeros\n");
    printf("\t12. Mediante el residuo si es primo o no\n");
    printf("\t13.Solicitar un numero y lo escriba en letras\n");
    printf("\t14. Tabla de codigo ascII\n");
    printf("\t15. Escribir tu nombre alreves\n");
    printf("\t16. Perdir numeros a capturar y ordenarlos de menor a mayor\n");
    printf("\t17. Perdir numeros a capturar y ordenarlos de mayor a menormenor\n");
    printf("\t18. Salida\n\n");
}
int centrar(char texto[120]){
    int longi;
    longi = strlen(texto);
    for(int i=1;i<=60-longi/2;i++) printf(" ");
    printf("%s", texto);
}
int encabezado(char titulo[120]){
    printf("%s", titulo);
}
