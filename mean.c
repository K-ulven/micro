#include <stdio.h>
#include <stdlib.h>
float prom(int V[], int n){
	float s=0;
	int i;
	for(i=0; i<n; i++)
	s=s+V[i];
	
	return s/n;
}

main() {
	srand(time(NULL));
	int n=10,n1=2+rand()%7,n2=10-n1,i; //n1 va de 2 a 8, si toma el caso en que n1=n2=5, n2 va a ser lo que le sobre a n1 
	int sec[10]={1,2,3,4,5,6,7,8,9,10};
	int sec1[n1], sec2[n2],cont=0;
	float m=prom(sec,n),m1,m2,c1,c2,c3,c4; 
	printf("La media de su secuencia es: %.2f \r\n\n",m);
	
	printf("Sec= ["); //muestra la secuenci original
	for(i=0; i<n; i++){
	printf(" %i",sec[i]);
	}
	
	printf("]\nSec1= [");  //muestra la secuencia 1 y la va llenando con los valores de sec[0]-sec[n1-1]
	for(i=0; i<n1; i++){
		sec1[i]=sec[i];
		printf(" %i",sec1[i]);		
	}
	
	printf("]\nSec2= [");	//muestra la secuencia 2 y la va llenando con valores de sec[n1]-sec[10]
	for(i=n1; i<n; i++){
		sec2[cont]=sec[i];
		printf(" %i",sec2[cont]);
		cont++;	
	}
	
	printf("]\n");
	m1=prom(sec1,n1);
	m2=prom(sec2,n2); //apenas ahora llenamos los vectores sec1 y sec2, sacamos la media
	printf(" m=%f n=%i m1=%f n1=%i m2=%f n2=%i\n",m,n,m1,n1,m2,n2);	 //imprimimos todos los datos y el resto es igual a ayer
	c1=(m1+m2)/2;
	printf("Segun el caso 1: m=(m1+m2)/2 	%.2f=%.2f\r\n\n",m,c1);
	c2=(m1+m2)/(n1+n2);
	printf("Segun el caso 2: m=((m1+m2)/(n1+n2) 	%.2f=%.2f\r\n\n",m,c2);
	c3=(n2*m1+n1*m2)/(n1+n2);
	printf("Segun el caso 3: m=(n2*m1+n1*m2)/(n1+n2) 	%.2f=%.2f\r\n\n",m,c3);
	c4=(n1*m1+n2*m2)/(n1+n2);
	printf("Segun el caso 4: m=(n1*m1+n2*m2)/(n1+n2) 	%.2f=%.2f",m,c4);
		

	
}