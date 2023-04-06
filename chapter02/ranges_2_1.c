#include <stdio.h>
#include <limits.h>

long fibonacci(long n);
float fibofloat(float n);


int main(){
	char a, d;	
	while(1){
		d = a+1;
		if(a>0 && d<0){
			printf("char: [%d,%d]\n", a, d);
			break;
		}	
		a++;	
	}


	short b, c;
	while(1){
		c = b+1;	
		if(b>0 && c<0){
			printf("short: [%hi,%hi]\n", b, c);	
			break;
		}	
		b++;
	}

	int e, f;
	while(1){
		f = e+1;	
		if(e>0 && f<0){
			printf("int: [%d,%d]\n", e, f);	
			break;
		}	
		e++;
	}
	
//	fibonacci version
	long inicio = 0;
	inicio = fibonacci(inicio);
	while((inicio+1)>0){
		inicio = fibonacci(inicio+1);
	}
	printf("long: [%ld, %ld]\n", (inicio-1),inicio);

//	fibo float
	float ini = 0;
	ini = fibofloat(ini);
	printf("float: [%f, %f]\n", (ini-1),ini);
	while((ini+1)>0){
		ini = fibofloat(ini+1);
		printf("%f\n", ini);
	}
	printf("float: [%f, %f]\n", (ini-1),ini);
		


}

long fibonacci(long inicio){
	long ini = inicio;
	
	long prox, t1 = 0, t2 = 1;
	while(1){
		prox = t1 + t2;	
		t1 = t2;
		t2 = prox;
		ini += prox;
		if(ini < 0){
			return ini -= prox;
	 		//return ini;
		}
	}
}

float fibofloat(float inicio){
	float ini = inicio;
	
	float prox, t1 = 9223372036854775807, t2 = 1;
	while(1){
		prox = t1 + t2;	
		t1 = t2;
		t2 = prox;
		ini += prox;
		if(ini){
			//return ini -= prox;
	 		return ini;
		}
	}
}
