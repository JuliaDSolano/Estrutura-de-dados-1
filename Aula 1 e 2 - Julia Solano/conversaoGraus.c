//importa biblioteca
#include <stdio.h>


//------ fun��o main
int main (){
	// declara��o de vari�veis
	float C, F; 
	int  c = 167;
	
	//mensagem para usuario digitar uma temperatura

	printf("Digite uma temperatura em %cC : ", c);
	
	//Pegar dado digitado pelo usuario e redirecionar para a variavel C
	scanf("%f", &C);
	
	//convers�o de temperatura
	F = C*(9.0/5.0)+32;
	
	//Mostra para o usuario a convers�o feita
	printf("%3.f%cC e o mesmo que %3.f%cF", C, c, F,c );
}
