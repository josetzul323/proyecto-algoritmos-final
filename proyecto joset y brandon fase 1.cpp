//fase 1//
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char palabra[5][25];
		char traduccion[5][25];
		char funcion[5][25];
		char bpalabra[25];
		char mpalabra[25];
		char epalabra[25];
		int o, j, salvarj=-1, salvari, ni=0;
		
		do {
			system("cls");
		printf("menu----\n");
		printf("1.- agregar palabras\n"); 
		printf("2.- mostrar palabras\n"); 
		printf("3.- buscar palabra\n");
		printf("4.- modificar palabra\n");
		printf("5.- eliminar palabra\n");
		printf("seleccion:");
		scanf("%d",&o);
		system("cls");
		switch(o){
			case 1:
				j=salvarj;
				j=j+1;
				ni=ni+1;
				
				printf("agregar palabra----\n\n");
				printf("introduzca palabra: ");
				scanf("%s",palabra[j]);
				printf("introduzca traduccion: ");
				scanf("%s",traduccion[j]);
				printf("introduzca funcion: ");
				scanf("%s",funcion[j]);
				salvarj=j;
				break;
				case 2:
				printf("todas palabras\n\n");
				for(j=0;j<ni;j++){
					printf("palabra: %s\n",palabra[j]);
					printf("traduccion: %s\n\n",traduccion[j]);
					printf("funcion: %s\n\n",funcion[j]);
					}
					getch();
					break;
					case 3:
				printf("buscar palabra----\n\n");
				printf("introduzca palabra: ");
				scanf("%s",bpalabra);
				for (j=0;j<ni;j++){
					if((strcmp(palabra[j],bpalabra))==0){
						printf("palabra: %s\n",palabra[j]);
						printf("traduccion: %s\n",traduccion[j]);
					printf("funcion: %s\n",funcion[j]);
					getch();
					}
					
				}
				break;
				case 4:
				printf("modificar palabra----\n\n");
				printf("introduzca palabra: ");
				scanf("%s",mpalabra);
				for (j=0;j<ni;j++){
				if((strcmp(palabra[j],mpalabra))==0){
					printf("introduzca nuevo traduccion: ");
					scanf("%s",traduccion[j]);
					printf("introduzca nuevo funcion: ");
					scanf("%s",funcion[j]);
						}	
				}
				break;
				case 5:
				printf("eliminar palabra----");
				printf("introduzca palabra: ");
				scanf("%s",epalabra);
				for (j=0;j<ni;j++){
				if((strcmp(palabra[j],epalabra))==0){
				salvari=j;	
					for(j=salvari;j<ni;j++){
						strcpy(palabra[j],palabra[j+1]);
						strcpy(traduccion[j],traduccion[j+1]);
						strcpy(funcion[j],funcion[j+1]);
					}
					ni=ni-1;
					salvarj=j-2;
						}	
				}
				break;
				} 
}while(1);
	
	getch();
	return 0;
	
}
