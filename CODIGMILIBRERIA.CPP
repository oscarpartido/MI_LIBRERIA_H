#include "milibreria.h"
void leers(char *mensaje, char s[],int n){
	char text[20];
	printf(mensaje);
	fflush(stdin);
	fgets(s,n,stdin);

	//sprintf(text, "%%%d[^\\n]",n);
	//fscanf(stdin,text,s);
	fflush(stdin);
	
	if(s[strlen(s)-1]=='\n'){
		s[strlen(s)-1]=0;
	}
}


float leerf(char *mensaje, float inferior, float superior){
	float valor=superior+1;
	char s[10];
	do{
		printf(mensaje);
		fflush(stdin);
		fgets(s,10,stdin);
		fflush(stdin);
		valor=atof(s);
			if(valor<inferior || valor>superior){
			printf("dato invalido!! debe estar entre %2.f-%2.f.vuelva a introducirlo: \n",inferior,superior);		
			}
}while(valor<inferior || valor >superior);
	return valor;
}

int leerd(char *mensaje, int inferior, int superior){
	int valor=superior+1;
	char s[10];
	do{
		printf(mensaje);
		scanf("%d",&valor);
			if(valor<inferior || valor>superior){
			printf("dato invalido!! debe estar entre %2.f-%2.f.vuelva a introducirlo: \n",inferior,superior);		
			}
	}while(valor<inferior || valor >superior);
	return valor;
}

//funciones de validacion de enteros y flotantes
//tomado de una pagina de internet
int es_entero(char*cadena){
	int i,valor;
	for(i=0; i<strlen(cadena);i++){
		valor=cadena[i]-'0';
		if(valor <0 || valor>9){
			if(i==0 &&valor==-3)continue;
			return 0;
		}
	}
	return 1;
}

int es_decimal(char*cadena){
	int i,valor;
	int tiene_punto=0;
	for (i=0; i<strlen(cadena);i++){
		valor=cadena[i]-'0';
		if (valor<0 || valor>9){
			/* el primer caracter es : -*/
			if(i=0 && valor==-3)continue;
			
			/*verifica que solo tenga un: . */
			if(valor==2 && !tiene_punto){
				tiene_punto=1;
				continue;
			}
			return 0;
		}
	}
	return 1;
}


