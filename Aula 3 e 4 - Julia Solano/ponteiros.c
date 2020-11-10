#include <stdio.h>

int main()
{

    int i = 1; 	//valor inteiro que a variável será apontada pelo ponteiro 
    int *ponteiroint = &i; //delcarando valor para o ponteiro
    *ponteiroint = 2; //atribuicao de valor para ponteiro
    
    //valor em float
    float f = 0.6;
    float *ponteirofloat = &f;
    *ponteirofloat = 0.2;
    
    //valor em char
    char c ='n';
    char  *ponteirochar = &c;
   *ponteirochar = 'b';

	//imprimir para o usuario os valores correspondentes
    printf("O valor do inteiro e %i ", *ponteiroint); 
    printf("\nO valor real e %f",  *ponteirofloat);
    printf("\nO valor de Char e %c", *ponteirochar);

}
