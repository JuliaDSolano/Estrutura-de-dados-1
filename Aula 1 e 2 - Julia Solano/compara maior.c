//inclus�o de biblioteca
//decalara��o de vari�veis

#include <stdio.h>

int compara(int a, int b, float c);

//-------- fun��o main 
int main(){
	
 int n1, n2, n3, res; //declar��o de variaveis no corpo
 printf("Digite dois valores inteiros e um real, todos separados por espa�o:\n"); //comando para inser��o de dados do usu�rio
 scanf("%d", &n1,"%d", &n2, "%f", &n3); //pegar os valores digitados e colocalos em variav�is 

 res = compara(n1, n2, n3); //variavel recebendo uma lista com os valores
 printf("o maior n�mero �: %d\n", res); //retornar o maior numero entre os tres
 return 0; 
}

// ------- fun��o de compara��o dos valores

int compara(int a, int b, float c){
 if (a > b, c) {
 return a;
 }else if(b > a,c){
 return b;
 }else{
 	return c;
 }
}
