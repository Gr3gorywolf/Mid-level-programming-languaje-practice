#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>




//////////////////////////////metodos para hacer mi vida mas facil

int cantidadsegmentos(char *datos){
	  char datacopy[400];
	  strcpy(datacopy,datos);
	 char *split=strtok(datacopy,";");
int counter=1;

while(split != NULL)
{
    split=strtok(NULL,";");
    counter=counter+1;
}

return counter;
	
}
char *split(char *datos,int posicion){
	
	 char mieldita[400];
	  char datacopy[400];
	  strcpy(datacopy,datos);
	 
	 
	 
	 char *split=strtok(datacopy,";");
	 if(posicion==0){
   strcpy(mieldita,split);
	 }
int counter=1;

while(split != NULL)
{
  
    split=strtok(NULL,";");
    if(counter==posicion){
    strcpy(mieldita,split);
	}
    counter=counter+1;
}

return mieldita;
	
}
void reiniciar(){
	
	system("proyectofinal.exe");
	system("exit");
}
void agregaralarchivo(FILE *fps,char *stringg,char *formatoo){
	
	char formato[2];
     strcpy(formato,formatoo);
     fprintf(fps,formato,stringg);
     
	
}

char *leerarchivo(char * nombrearchivo){
	char nombresillo[400];
	char resultado[1500];
	strcpy(nombresillo,nombrearchivo);
	FILE *fps;
	fps=fopen(nombresillo,"r");

fscanf(fps,"%s",resultado);
fclose(fps);
	return resultado;
	
}
bool esigual(char *prro,char *prro2){
	if(strcmp(prro,prro2)==0){
	return true;
	}else{
	return false;
	}
}

bool existearchivo(char *nombrearchivo){


char copianombre[400];
strcpy(copianombre,nombrearchivo);
FILE *klk=fopen(copianombre,"r");


if(klk==NULL){
	fclose(klk);
return false;
}else{
		fclose(klk);
return true;
}

}

void escribirencarchivo(char *nombrearchivo,char **datos){


FILE *fp;
fp=fopen(nombrearchivo,"w");
fprintf(fp,"%s",datos);
fclose(fp);

}

int stringaint(char *string){
	char klk[400];
	strcpy(klk,string);
	int temp=atoi(klk);
	return temp;
}
int charaint(char caracter){
	int temp=caracter-'0';
	return temp;
}




char *pedirequisito(char *encabezado){
  
char devuelta[400];
   printf("%s",encabezado);
  scanf("%s",devuelta);
  return  devuelta ;

}

///////////////////////////////////////////////////////////////////////////////



void operacion(int tipooperacion){
	system("cls");
	printf("digite un numero\n");
	double numero1=0.0;
	double numero2=0.0;
		scanf("%lf",&numero1);
	if(tipooperacion==1){
	
		printf("digite el numero al que se le sumara\n");
	scanf("%lf",&numero2);
		printf("el resultado de la suma es: %d\n",(numero1+numero2));
		printf("pulse enter para continuar\n");
		getch();
	}
	else
	if(tipooperacion==2)
	{
	
		printf("digite el por el que se restara\n");
		scanf("%lf",&numero2);
		printf("el resultado de la resta es: %d\n",(numero1-numero2));
		printf("pulse enter para continuar\n");
		getch();
	}
	else
	if(tipooperacion==3)
	{
	
		printf("digite el numero por el que sera multiplicado \n");
		scanf("%lf",&numero2);
		printf("el resultado de la multiplicacion es: %d\n",(numero1*numero2));
		printf("pulse enter para continuar\n");
		getch();
	}
	else
		if(tipooperacion==4)
	{
	
		printf("digite el numero por el cual sera dividido\n");
			scanf("%lf",&numero2);
		printf("el resultado de la division es: %f\n",(numero1/numero2));
		printf("pulse enter para continuar\n");
		getch();
	}
	else
		if(tipooperacion==5)
	{
		printf("digite el numero al cual sera potenciado\n");
		scanf("%lf",&numero2);
		
		printf("el resultado de la potenciacion es: %f\n",pow(numero1,numero2));
		printf("pulse enter para continuar\n");
		getch();
		
	}
	else
		if(tipooperacion==6)
	{
	
		printf("el resultado de la raiz cuadrada es: %f\n",sqrt(numero1));
		printf("pulse enter para continuar\n");
		getch();
	}
	else
		if(tipooperacion==7)
	{
		int resultado=1;
		int x=0;
		int y=1;
			printf("%i+%i=%i\n",x,y,resultado);
			
		for(int i=0;i<numero1;i++){
		
			if(resultado>=3){
				y=x;
			}
			
		x=resultado;
			resultado=x+y;
			printf("%i+%i=%i\n",x,y,resultado);
				
		
			
		}
		
		
		printf("pulse enter para continuar\n");
		getch();
		
		
	}
	else
		if(tipooperacion==8){
			
		}
	
}
void decimalabinario(){
		system("cls");
   printf("digite el decimal para luego decir su valor en binario\n");
	int numerosbinarios[1000];
	int n=0;
	scanf("%d",&n);
	int i=0;
	while(n>0){
		
		
		numerosbinarios[i]=n%2;
		n=n/2;
		i++;
	}
	
	for(int k=i-1;k>=0;k--){
		
		printf("el entero en binario es: %d\n",numerosbinarios[k]);
	}
		printf("pulse enter para continuar\n");
		getch();
		
	
}
 void binarioadecimal(){
	system("cls");
   printf("digite el binario para luego decir su valor en decimal");
	char elbina[400];
	scanf("%s",&elbina);
   double	total=0.0;
  	 int yklk =strlen(elbina)-1;
	for(int i=0;i<strlen(elbina)-1;i++){
	
		if(charaint(elbina[i])==1){
			total+=pow(2,(yklk-i));
		}
		
	}
	printf("el valor en decimal del binario es: %f\n",total);
	printf("pulse enter para continuar");
	getch();
	
	
}





void vergentecumpleanos(){
	
	if(existearchivo("registryca")){
	
	int dia,mes,ano;
   printf("digite el dia actual\n");
   scanf("%d",&dia);
   printf("digite el mes actual\n");
    scanf("%d",&mes);
   printf("digite el ano actual\n");
    scanf("%d",&ano);
    
   system("cls");
   for(int i=0;i<cantidadsegmentos( leerarchivo("registryca"))-1;i++){
   	
    int anonacimiento=ano;
   	char nombrear[450];
   	strcpy(nombrear,"CA-");
   	strcat(nombrear,split(leerarchivo("registryca"),i));
   	strcat(nombrear,".csv");
   	int diadesunacimiento=stringaint(split(leerarchivo(nombrear),2));
   	int mesdesunacimiento=stringaint(split(leerarchivo(nombrear),3));
   	int anodesunacimiento=stringaint(split(leerarchivo(nombrear),4));
   	if(mes>mesdesunacimiento||(dia>diadesunacimiento&&mes==mesdesunacimiento)){
   		anonacimiento++;
	   }
	   
	   char nombreuser[400];
	   strcpy(nombreuser,split(leerarchivo("registryca"),i));
	   
   		printf("%s: ",nombreuser);
   		printf("cumple el dia %i del mes %i del ano %i\n pulse enter para continuar\n",diadesunacimiento,mesdesunacimiento,anonacimiento); 
   }
   	}else{
   		printf("no tiene personas registradas pulse enter para volver\n");
   		getch();
	   }
   getch();
   
}

void buscarcumpleanos(){
	system("cls");
		int dia,mes,ano;
		char nombreuser[400];
		 printf("digite el usuario que desea buscar\n");
		 scanf("%s",&nombreuser);
	system("cls");
   printf("digite el dia actual\n");
   scanf("%d",&dia);
   printf("digite el mes actual\n");
    scanf("%d",&mes);
   printf("digite el ano actual\n");
    scanf("%d",&ano);
    
   system("cls");
     	
    int anonacimiento=ano;
   	char nombrear[450];
   	strcpy(nombrear,"CA-");
   	strcat(nombrear,nombreuser);
   	strcat(nombrear,".csv");
   	if(existearchivo(nombrear)){
	  
   	int diadesunacimiento=stringaint(split(leerarchivo(nombrear),2));
   	int mesdesunacimiento=stringaint(split(leerarchivo(nombrear),3));
   	int anodesunacimiento=stringaint(split(leerarchivo(nombrear),4));
   	if(mes>mesdesunacimiento||(dia>diadesunacimiento&&mes==mesdesunacimiento)){
   		anonacimiento++;
	   }
	   
	 
   		printf("%s: ",nombreuser);
   		printf("cumple el dia %i del mes %i del ano %i\n pulse enter para continuar\n",diadesunacimiento,mesdesunacimiento,anonacimiento); 
   		 getch();
   
   	}else{
   		printf("El usuario %s no esta registrado aun\n",nombreuser);
   		getch();
	   }
  

}

void registrarcumpleanos(){

system("cls");
char nombre[400];
char apellido[400];
char fechacumpleano[400];

char *archivoentero;
 strcpy(nombre,pedirequisito("digite su nombre: ")) ;
strcpy(apellido,pedirequisito("\ndigite su apellido: "));
strcpy(fechacumpleano,pedirequisito("\ndigite el dia de su nacimiento: "));
strcat(fechacumpleano,";");
strcat(fechacumpleano,pedirequisito("\ndigite el mes de su nacimiento: "));
strcat(fechacumpleano,";");
strcat(fechacumpleano,pedirequisito("\ndigite el ano de su nacimiento: "));
FILE *fp;
char nombre2[400];
char usuario2[400];
strcpy(usuario2,nombre);
strcpy(nombre2,"CA-");
strcat(nombre2,usuario2);
strcat(nombre2,".csv");
fp=fopen(nombre2,"w");
agregaralarchivo(fp,nombre,"%s;");
agregaralarchivo(fp,apellido,"%s;");
agregaralarchivo(fp,fechacumpleano,"%s");
fclose(fp);
if(existearchivo("registryca")){
	
	char datosviejos[2500];
	strcpy(datosviejos,leerarchivo("registryca"));
	strcat(datosviejos,";");
	
	strcat(datosviejos,nombre);
	FILE *fps;
char nombre2[400];
char usuario2[400];
fps=fopen("registryca","w");
agregaralarchivo(fps,datosviejos,"%s");
fclose(fps);
	
	
	
}else{
	
		FILE *fpss;
char nombre2[400];
char usuario2[400];
fpss=fopen("registryca","w");
agregaralarchivo(fpss,nombre,"%s");
fclose(fpss);
	
}


}


void cumpleanos(){
	
	
	
		
system("cls");
printf("seleccione la opcion para moverte sobre los menues\n");
printf("1-Registrar persona\n");
printf("2-Ver personas y su fecha de cumpleanos\n");
printf("3-Buscar persona\n");
printf("4-Salir al menu principal\n");

char pelo[400];
scanf("%s",&pelo);
if(esigual(pelo,"1")){
 registrarcumpleanos();
 cumpleanos();
}
else
if(esigual(pelo,"2")){
	vergentecumpleanos();
	cumpleanos();

}
else
if(esigual(pelo,"3")){
buscarcumpleanos();
cumpleanos();
}
else
if(esigual(pelo,"4")){
 reiniciar();
}
else
{
	printf("seleccion invalida pulse enter para reintentar");
	getch();
    cumpleanos();
}
	
	
	
	
	
	
	
}

void calculadora(){
	
	
	
	
	
system("cls");
printf("seleccione la opcion para moverte sobre los menues\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Multiplicacion\n");
printf("4-Division\n");
printf("5-Potenciacion\n");
printf("6-Radicacion\n");
printf("7-Fibonacci\n");
printf("8-Binario a decimal\n");
printf("9-Decimal a binario\n");
printf("10-Ir al menu principal\n");
char pelo[400];
scanf("%s",&pelo);
if(esigual(pelo,"1")){
	operacion(1);
	calculadora();
}
else
if(esigual(pelo,"2")){
	operacion(2);
	calculadora();
}
else
if(esigual(pelo,"3")){
	operacion(3);
	calculadora();
}
else
if(esigual(pelo,"4")){
	operacion(4);
	calculadora();
}
else
if(esigual(pelo,"5")){
	operacion(5);
	calculadora();
}
else
if(esigual(pelo,"6")){
	operacion(6);
	calculadora();
}
else
if(esigual(pelo,"7")){
	operacion(7);
	calculadora();
}
else
if(esigual(pelo,"8")){
	binarioadecimal();
	calculadora();
}
else
if(esigual(pelo,"9")){
	decimalabinario();
	calculadora();
}
if(esigual(pelo,"10")){
	reiniciar();
}
else
{
	printf("seleccion invalida pulse enter para reintentar");
	getch();
	calculadora();
}
	
	
	
	
}








int gettearprecio(int numeroh){
	if(numeroh==1)
	return 450;
	if(numeroh==2)
	return 700;
	if(numeroh==3)
	return 1500;
}

void checkout(){
	
		system("cls");
		if(existearchivo("registryht")){
	
		printf("A continuacion se presentaran todos los huespedes\n seleccione el que desee para hacerle el checkout\n");
		char datosarchivo[1700];
		strcpy(datosarchivo,leerarchivo("registryht"));
		for (int i=0;i<cantidadsegmentos(datosarchivo)-1;i++){
			
		  char nombresillo[200];
		  strcpy(nombresillo,split(datosarchivo,i));
		  printf("%i-%s\n",i+1,nombresillo);
		  
		  
		}
		int seleccion=0;
		scanf("%i",&seleccion);
		if(seleccion<=cantidadsegmentos(datosarchivo)){
			system("cls");
			////////////////////////////here goes the logistic!!
			char datosarchivol[1500];
			char nombrearchivo[400];
			strcpy(nombrearchivo,"HT-");
			strcat(nombrearchivo,split(datosarchivo,seleccion-1));
			strcat(nombrearchivo,".csv");
			strcpy(datosarchivol,leerarchivo(nombrearchivo));
			
			/////////////////////////////////////////////
			int precioh=stringaint(split(datosarchivol,2));
			int dias=stringaint(split(datosarchivol,3));
			char nombreuser[400];
			strcpy(nombreuser,split(datosarchivol,0));
			char apellidouser[400];
			strcpy(apellidouser,split(datosarchivol,1));
			printf("A continuacion se presentaran los datos de el usuario en custodia\n");
			printf("-----------------------------------------\n");
			printf("Nombre:%s\n",nombreuser);
			printf("Apellido:%s\n",apellidouser);
			printf("Precio por dias:%i$\n",precioh);
			printf("Dias:%i\n",dias);
			printf("Total a pagar:%i$\n",precioh*dias);
			printf("-----------------------------------------\n");
			printf("Esta seguro que desea hacerle checkout al siguiente huesped[s/n]");
			char desicion[200];
			scanf("%s",&desicion);
			if(esigual(desicion,"s")||esigual(desicion,"S") ){
				
				
				
				
		char datosarchivoo[1700];
		strcpy(datosarchivoo,leerarchivo("registryht"));
		
		FILE *alchi=fopen("registryht","w");
		
		int veces=0;
		for (int i=0;i<cantidadsegmentos(datosarchivoo)-1;i++){
			
		  char nombresilloo[200];
		  strcpy(nombresilloo,split(datosarchivoo,i));
		  char formato[5];
		  if(i==0){
		  	strcpy(formato,"%s");
		  }else{
		  	strcpy(formato,";%s");
		  }
		  if(!esigual(nombresilloo,nombreuser)){
		  	 agregaralarchivo(alchi,nombresilloo,formato);
		  	 veces++;
		  }
		
		  
		  
		}
	
		fclose(alchi);
			if(veces==0){
			remove("registryht");
		}
		if(existearchivo(nombrearchivo)){
		remove(nombrearchivo);
      	}
				 printf("checkout finalizado pulse enter para volver\n");
			  getch();	
				
			}
			else
			if(esigual(desicion,"n")||esigual(desicion,"N") ){
				 printf("Pulse enter para volver\n");
			  getch();
			}else{
			  printf("Seleccion invalida pulse enter para reintentar\n");
			  getch();
			  checkout();
			}
			
			
			
		}else{
		  printf("seleccion invalida pulse enter para reintentar\n");
		  getch();
		  checkout();
		}
		
		
		
		
		
		
			getch();
	
	     }else{
				
				printf("No hay huespedes registrados actualmente\n pulse enter para salir");
				getch();
		}
	
}
void checkin(){
	system("cls");
char nombre[400];
char apellido[400];
char tipo[100];
char dias[100];
 strcpy(nombre,pedirequisito("digite el nombre del huesped: ")) ;
strcpy(apellido,pedirequisito("\ndigite el apellido del huesped: "));
system("cls");
printf("Seleccione la habitacion que usted desea\n");
printf("-----------------tipo 1--------------\n");
printf("Nombre:Sencilla\n Precio por dias:450$ \n Descripcion:1 cama\n");
printf("-----------------tipo 2--------------\n");
printf("Nombre:Regular\n Precio por dias:700$ \n Descripcion: 2 camas pero no posee jacuzzy\n");
printf("-----------------tipo 3--------------\n");
printf("Nombre:Lujo\n Precio por dias:1500$ \n Descripcion:3 camas y jacuzzy \n");
scanf("%s",&tipo);
if(esigual(tipo,"1")||esigual(tipo,"2")||esigual(tipo,"3")){

system("cls");
printf("Cuantos dias se hospedara?\n");
scanf("%s",&dias);


FILE *fps;

char nombrearchivo[400];
strcpy(nombrearchivo,"HT-");
strcat(nombrearchivo,nombre);
strcat(nombrearchivo,".csv");

fps=fopen(nombrearchivo,"w");
 agregaralarchivo(fps,nombre,"%s;");
  agregaralarchivo(fps,apellido,"%s;");
   agregaralarchivo(fps,tipo,"%s;");
    agregaralarchivo(fps,dias,"%s");
    fclose(fps);
    
    if(existearchivo("registryht")){
    char datos[1700];
	strcpy(datos,leerarchivo("registryht"));
    strcat(datos,";");
    strcat(datos,nombre);
    
   FILE  *fpss=fopen("registryht","w");
 agregaralarchivo(fpss,datos,"%s");
    fclose(fpss);
    	
	}else{
		
	

    
   FILE *fpss=fopen("registryht","w");
 agregaralarchivo(fpss,nombre,"%s");
    fclose(fpss);
    
    
	}
	printf("Registrado!! pulse enter para continuar\n");
	getch();
	
	}else{
		printf("seleccion invalida pulse enter para reintentar\n");
		getch();
		checkin();
	}
    



}



void hotel(){
	
	
system("cls");
printf("seleccione la opcion para moverte sobre los menues\n");
printf("1-Hacer checkin\n");
printf("2-Hacer checkout\n");
printf("3-Salir al menu principal\n");

char pelo[400];
scanf("%s",&pelo);
if(esigual(pelo,"1")){
 checkin();
 hotel();
}
else
if(esigual(pelo,"2")){
	checkout();
	 hotel();

}
else
if(esigual(pelo,"3")){
  reiniciar();
}
else
{
	printf("seleccion invalida pulse enter para reintentar");
	getch();
    hotel();
}
	
	
	
	
}









void menu(){
system("cls");

char nombreuser[400]="       Bienvenido: ";

strcat(nombreuser,split(leerarchivo(leerarchivo("cache")),0));
strcat(nombreuser,"\n");
printf("%s",nombreuser);
printf("----------------------------------\n");
printf("seleccione la opcion para moverte sobre los menues\n");
printf("1-calendario de cumpleanos\n");
printf("2-hotel\n");
printf("3-calculadora\n");
printf("4-deslogearse\n");
printf("5-salir\n");
char pelo[400];
scanf("%s",&pelo);
if(esigual(pelo,"1"))
cumpleanos();
else
if(esigual(pelo,"2"))
hotel();
else
if(esigual(pelo,"3"))
calculadora();
else
if(esigual(pelo,"4")){
	if(existearchivo("cache")){
		remove("cache");
	}
reiniciar();


}
else
if(esigual(pelo,"5"));
else{
	printf("seleccion invalida pulse enter para reintentar");
	getch();
	menu();
}





}




void registrar(){

system("cls");
char nombre[400];
char apellido[400];
char telefono[400];
char correo[400];
char usuario[400];
char contrasena[400];
char *archivoentero;
 strcpy(nombre,pedirequisito("digite su nombre: ")) ;
strcpy(apellido,pedirequisito("\ndigite su apellido: "));
strcpy(telefono,pedirequisito("\ndigite su telefono: "));
strcpy(correo,pedirequisito("\ndigite su correo: "));
strcpy(usuario,pedirequisito("\ndigite su nombre de usuario: "));
strcpy(contrasena,pedirequisito("\nigite su contrasena: "));

FILE *fp;
char nombre2[400];
char usuario2[400];
strcpy(usuario2,usuario);
strcpy(nombre2,"RG-");
strcat(nombre2,usuario2);
strcat(nombre2,".csv");
fp=fopen(nombre2,"w");
agregaralarchivo(fp,nombre,"%s;");
agregaralarchivo(fp,apellido,"%s;");
agregaralarchivo(fp,telefono,"%s;");
agregaralarchivo(fp,correo,"%s;");
agregaralarchivo(fp,usuario,"%s;");
agregaralarchivo(fp,contrasena,"%s");
fclose(fp);

}






void login(){
system("cls");
char usuario[400];
char contrasena[400];
printf("----------Login----------\n");
printf("No tiene cuenta? pulse r y enter\n");
printf("digite el nombre de usuario: ");
gets(usuario);
if(esigual(usuario,"r")||esigual(usuario,"R")){
	registrar();
	
}

printf("\ndigite la contrasena de usuario: ");
gets(contrasena);
if(esigual(contrasena,"r")||esigual(contrasena,"R")){
	registrar();
}


char nombre[400];
strcpy(nombre,"RG-");
strcat(nombre,usuario);
strcat(nombre,".csv");


if(!(esigual(usuario,"r")||esigual(usuario,"R"))){

if(existearchivo(nombre)){


char contraarchivo[400];
  
strcpy(contraarchivo,split(leerarchivo(nombre),5));

if(esigual(contrasena,contraarchivo)){

    FILE *fppp;
    fppp=fopen("cache","w");
    agregaralarchivo(fppp,nombre,"%s");
    fclose(fppp);
    	menu();
   }else{
	printf("\nContrasena incorrecta pulse enter para reintentar");
    getch();
    login();

  }




}
 else{
	printf("error al logearse pulse enter para intentar de nuevo");
	getch();
login();
  }
}else{
	login();
}

}



int main(){
	if(existearchivo("cache")){
		menu();
	}else{
		login();
	}
	
/// printf("%s",split("700;500;200",0));
}









