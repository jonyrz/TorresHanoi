#include <stdlib.h>
#include <stdio.h>
int num1=0;
//char opcion;
long facr(int N);
long faci(int N);
long fibr(int N);
long fibi(int p);
long fib_i(int N);
long fib(int*A, int N);
void TH(int N, char O, char A, char D); int num=0;
int f(char *c, int I, int F);
int t(char *c, int I, int F);
int e(char *c, int I, int F);


int main(){
	int a, resp, N, I, F, p,z;
	long n;
	char c[100], signo, A='A', O='O', D='D';
	printf("Menu\n");
	printf("1.- factorial Ite\n");
	printf("2.- factorial Rec\n");
	printf("3.- Serie fibo ite\n");
	printf("4.- Serie fibo rec\n");
	printf("5.- Serie fibo rec (arreglo)\n");
	printf("6.- Torres de Hanoi\n");
	printf("7.- Gramatica\n");
	printf("8.- Salir\n");	
	//menu:
	scanf ("%d",&a);
	switch (a){
		case 1:
			printf ("ingrese el numero que desee calcular\n");
			scanf ("%d",&N);
			n=faci(N);
			printf ("%ld", n);
			break;
		case 2:
			printf ("ingrese el numero que desee calcular\n");
			scanf ("%d",&N);
			n=facr(N);
			printf("%ld", n);
			break;
		case 3:
			printf ("ingrese el numero de la posicion de la serie que desee saber\n");
			scanf ("%d",&N);
			n=fibr(N);
			printf("%ld", n);
			break;
		case 4:
			printf ("ingrese el numero de la posicion de la serie que desee saber\n");
			scanf ("%d",&N);
			n=fibi(N);
			printf("%ld", n);
			break;
		case 5:
			printf ("ingrese el numero de la posicion de la serie que desee saber\n");
			scanf ("%d",&N);
			n=fib_i(N);
	//		z=n;
			printf("%ld",n);
			break;
		case 6:
			printf ("ingrese el numero de discos para las torres de hanoi\n");
			scanf ("%d",&N);
			TH(N, O, A, D);
			printf("El menor numero de movimientos posibles  es de: %d",num);
			break;
		
		case 7:
			
			
printf ("ingrese la expresion a analizar\n");
	char opcion;
	scanf("%s",&opcion);
	
	if(opcion=='(')
	{
	puts("Esta exprecion si se puede calcular\n");
		}else{
		
		
			puts("Expresion mal escrita\n");
						
	}
	
	
	break;
	
		case 8:
			exit(0);
			break;
	}
}

long facr(int N){
	if (N==0 || N==1)
	   return 1;
    return facr (N-1)*N; 
}

long faci(int N){
	int n=1, x=1;
	for (n=1;n<=N;n++)
		x=x*n;
	return x;
}

long fibr(int N){
	if(N==0 || N==1)
       return N;
    return fibr(N-1) + fibr(N-2);
}

long fibi(int p){
	int n1=1, n2=0, i, N;
	for (i=0; i<p-1; i++ ){
		N=n1+n2;
		n2=n1;
		n1=N;
	}
	return N;
}

void TH(int N, char O, char A, char D){
  num ++;
	if(N==1){  
		printf ("Mover disco %d de %c a %c \n", N, O, D);
	}else{
		TH(N-1, O, D, A); 
		printf ("Mover disco %d de %c a %c \n", N, O, D);
		TH(N-1, A, O, D) ;
	}
	//	printf("%d\n",num1); 
		//*num=num1;
}





long fib_i(int N){
	int A[N];
	int i;
	A[0]=0;
	A[1]=1;
	for(i=2;i<=N;i++){
	 A[i]=-1;
    }
    fib(A,N);
    return fib(A,N);
    //printf("%d",fib);
}

long fib(int*A, int N){
	if(N==0||N==1)
	return N;
	if(A[N]>-1)
	return A[N];
	A[N-2]=fib(A,N-2);
	return A[N-2]+fib(A,N-1);
//	printf("%d",fib);
}

