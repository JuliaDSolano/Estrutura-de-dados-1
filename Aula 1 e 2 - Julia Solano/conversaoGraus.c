//importa biblioteca
#include <stdio.h>


//------ função main
int main (){
	// declaração de variáveis
	float C, F; 
	int  c = 167;
	
	//mensagem para usuario digitar uma temperatura

	printf("Digite uma temperatura em %cC : ", c);
	
	//Pegar dado digitado pelo usuario e redirecionar para a variavel C
	scanf("%f", &C);
	
	//conversão de temperatura
	F = C*(9.0/5.0)+32;
	
	//Mostra para o usuario a conversão feita
	printf("%3.f%cC e o mesmo que %3.f%cF", C, c, F,c );
}
