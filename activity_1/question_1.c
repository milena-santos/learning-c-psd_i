/*
Escreva um programa em C que exiba o código ASCII de cada letra da palavra "Ana". Para isso, armazene cada caractere da palavra em uma variável do tipo char e, em seguida, imprima seu valor numérico utilizando o especificador de formato para inteiros (%d).
*/

#include <stdio.h>

int main () {

    char A, n, a;

    A = 'A';
    n = 'n';
    a = 'a';

    printf("%d", A);
    printf("\t%d", n);
    printf("\t%d", a);

    return 0;
}
