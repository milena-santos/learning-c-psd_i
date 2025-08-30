/*
Uma conta poupança foi aberta com um depósito inicial de R$789,54. A conta rende 0,56% de juros ao mês, aplicados a partir do segundo mês.

No segundo mês, foi feito um depósito adicional de R$303,20.
No terceiro mês, houve um saque de R$58,25.
Implemente um programa em C que calcule e imprima o saldo da conta no início do quarto mês, considerando a aplicação dos juros e as movimentações mencionadas.

Dica: Armazene o saldo em uma variável do tipo float e utilize os cálculos de juros mês a mês.

A saída deverá ser 1046.44
*/

#include <stdio.h>

int main () {

    float initial_deposit, second_month_deposit, third_month_sacking, fee, total_second, total_third;

    initial_deposit = 789.54;
    second_month_deposit = 303.20;
    third_month_sacking = 58.25;
    fee = 1.0056;

    total_second = (initial_deposit + second_month_deposit) * fee;
    total_third = (total_second - third_month_sacking) * fee;

    printf ("%.2f", total_third);

    return 0;
}

