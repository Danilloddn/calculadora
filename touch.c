#include <stdio.h>

double soma(double x , double y){
	return x+y ;
}
double sub(double x , double y){
	return x-y;
}
double div(double x, double y){
	if(y!=0) return x/y;
	else return -1;
}
double mul(double x, double y){
	return x*y;
}

int main(){
	int x,y,op;
	printf("Digite num x e y:\n");
	scanf("%d,%d", &x,&y);
	printf("Entre com a opcao desejada \n
	1-Soma
	2-Subtracao
	3-Divisao
	4-Multiplicacao
	/n);
	scanf("%d", op);
	switch(op){
	case 1: soma(x,y);
	break;
	case 2: sub(x, y);
	break;
	case 3: div(x, y);
	break;	
	case 4: mul(x,y);
	break;
	return 0;
}
