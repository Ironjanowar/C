#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int finish(char string[]){
	char aux[] = "exit";
	int i;
	int count = 0;
	int a = 0;

	if(strcmp(string, aux) != 0){
		for (i = 0; i < strlen(string); ++i)			{
			if(string[i] == aux[i]){
				count++;
			}
		}

		if (count == strlen(string)){
			a = 0; /*String == "exit", por lo que se cierra el programa*/
		}else{
			a = 1; /*String != "exit", el programa continua*/
		}
	}

	return a;
}

/*char* leerString(char* string){
	if (fgets(string, sizeof(string), stdin) != NULL){
		return string;
	}else{
		return "Error al leer";
	}
}*/

void vaciarString(char* string){
	int w = 0;

	while(w < strlen(string)){
			string[w] = '\0';
			w++;
	}
}

void invertirString(char* string){
	int n, i;

	n = strlen(string);

	for (i = n - 1; i >= 0; --i){
		printf("%c", string[i]);
	}
}

int main (int argc, char** argv){
	char string[10];

	printf("Hey! Escribe una palabra y le dare la vuelta!\nEscribe exit para salir.");

	while(1){
		vaciarString(string);    //Se vacia string

		printf("\n>"); 			 //Prompt
		
		//leerString(string);    

		scanf("%s", string);     //Se lee el string
								 
		if(finish(string) == 0){ //Se verifica si se escribe exit
			break;
		}
		invertirString(string);  //Se imprime el string al reves
	}

	return 0;
}