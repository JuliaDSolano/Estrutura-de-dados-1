//inclusão de biblioteca
//decalaração de variáveis

#include <stdio.h>

int compara(int a, int b, float c);

//-------- função main 
int main(){
	
 int n1, n2, n3, res; //declarção de variaveis no corpo
 printf("Digite dois valores inteiros e um real, todos separados por espaço:\n"); //comando para inserção de dados do usuário
 scanf("%d", &n1,"%d", &n2, "%f", &n3); //pegar os valores digitados e colocalos em variavéis 

 res = compara(n1, n2, n3); //variavel recebendo uma lista com os valores
 printf("o maior número é: %d\n", res); //retornar o maior numero entre os tres
 return 0; 
}

// ------- função de comparação dos valores

int compara(int a, int b, float c){
 if (a > b, c) {
 return a;
 }else if(b > a,c){
 return b;
 }else{
 	return c;
 }
}
