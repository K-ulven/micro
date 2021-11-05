#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//creamos una matriz con todas las posibles fichas 
char piez[28][2]={{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{2,2},{2,3},{2,4},{2,5},{2,6},{3,3},{3,4},{3,5},{3,6},{4,4},{4,5},{4,6},{5,5},{5,6},{6,6}};
// creamos los vectores del numero de arriba y del numero de abajo, en cada ficha de los jugadores
char p1Ar[7],p1Ab[7],p2Ar[7],p2Ab[7],p3Ar[7],p3Ab[7],p4Ar[7],p4Ab[7],ficha; 

void whrite(char v[], char v2[]){ //funcion para dibujar las fichas de los jugadores
	char i,j,k;
	char numbers[7][3][7] = {
    {
        {"       "},
        {"       "},
        {"       "}
    },
    {
        {"       "},
        {"   o   "},
        {"       "}
    },
    {
        {" o     "},
        {"       "},
        {"     o "}
    },
    {
        {" o     "},
        {"   o   "},
        {"     o "}
    },
    {
        {" o   o "},
        {"       "},
        {" o   o "}
    },
    {
        {" o   o "},
        {"   o   "},
        {" o   o "}
    },
    {
        {" o   o "},
        {" o   o "},
        {" o   o "}
    },
};
//creacion del marco de las fichas
for(k=0; k<7; k++){ 
printf("%d\n",k+1);
printf("* * * * *\n");	
for(i=0;i<3;i++){
printf("*");	
	for(j=0; j<7; j++){
		printf("%c",numbers[v[k]][i][j]);	
	}
	printf("*\n"); 
}
    printf("* * * * *\n"); 
for(i=0;i<3;i++){
printf("*");	
	for(j=0; j<7; j++){
		printf("%c",numbers[v2[k]][i][j]);
	}
	printf("*\n");
}
    printf("* * * * *\n"); 
}
}
// funcion para llenar las fichas de los jugadores
void fill(char v[],char v2[]){
	char i;
	srand(time(NULL));
	for(i=0;i<7;i++){	
        ficha=rand()%28;//posicion aleatoria en la matriz 'piez'
        if(piez[ficha][0] != 'x' && piez[ficha][1] != 'x'){ //cada vez que se tome una posicion en 'piez', esta cambie a ser XX, y si es XX elige otra poscion aletoria para llenar
			v[i] = piez[ficha][0];
			piez[ficha][0] = 'x';
			v2[i] = piez[ficha][1];
			piez[ficha][1] = 'x';			
		}else{
			i--;
		}
	}
}
int main(){
    // llenamos las fichas de los jugadores con la funcion fill
    char i,j,a=0,a2=0;
	fill(p1Ar,p1Ab);
	fill(p2Ar,p2Ab);	
	fill(p3Ar,p3Ab);
	fill(p4Ar,p4Ab);
	//imprimimos las fichas usando la funcion write
	printf("player 1\n");
	whrite(p1Ar,p1Ab);
	printf("player 2\n");
	
	whrite(p2Ar,p2Ab);
	printf("player 3\n");

	whrite(p3Ar,p3Ab);
	printf("player 4\n");

	whrite(p4Ar,p4Ab);	
	printf("gracias por jugar! :3");
}