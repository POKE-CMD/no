int suma();
int resta();
int multiplicacion();
int division();
int nombrecm();

int suma(){
    int a,b,c;

    portada();
    printf("\n\tDime un primer numero: ");
    scanf("%d",&a);
    printf("\tDime un segundo numero: ");
    scanf("%d",&b);
    c=a+b;
    printf("\n\tResultado: %d\n\n\n\t",c);
    system("pause");
    system("cls");
}
int resta(){
    int a,b,c;

    portada();
    printf("\n\tDime un primer numero: ");
    scanf("%d",&a);
    printf("\tDime un segundo numero: ");
    scanf("%d",&b);
    c=a-b;
    printf("\n\tResultado: %d\n\n\n\t",c);
    system("pause");
    system("cls");
}
int multiplicacion(){
    int a,b,c;

    portada();
    printf("\n\tDime un primer numero: ");
    scanf("%d",&a);
    printf("\tDime un segundo numero: ");
    scanf("%d",&b);
    c=a*b;
    printf("\n\tResultado: %d\n\n\n\t",c);
    system("pause");
    system("cls");
}
int division(){
    int a,b,c;

    portada();
    printf("\n\tDime un primer numero: ");
    scanf("%d",&a);
    printf("\tDime un segundo numero: ");
    scanf("%d",&b);
    c=a/b;
    printf("\n\tResultado: %d\n\n\n\t",c);
    system("pause");
    system("cls");
}
int nombrecm(){
	char nombre[100];

	printf (" Escribe tu nombre completo :");
	gets (nombre);
	int longitud=strlen(nombre);
	printf (" Este es tu nombre  alrevez:");
	for (int i=longitud-1;i>=0;i--){
        printf ("%c",nombre[i]);}
}
