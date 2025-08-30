/*
Brutus e Olívia foram ao médico, que afirmou que ambos estão fora do peso ideal. Eles discordaram veementemente. Para provar que estava certo, o médico mostrou o Índice de Massa Corporal (IMC) de cada um, considerando que:

Brutus tem 1,84 m e pesa 122 kg
Olívia tem 1,76 m e pesa 45 kg
Implemente um programa que:

Calcule e exiba o IMC de Brutus e de Olívia usando a fórmula:
IMC = peso ÷ (altura²)
Calcule a quantidade mínima de quilos que Brutus deve perder e que Olívia deve ganhar para atingir um IMC saudável (18,5 a 25).
A tabela abaixo descreve as faixas de IMC:

IMC	Classificação
< 16	Magreza grave
16 a < 17	Magreza moderada
17 a < 18.5	Magreza leve
18.5 a < 25	Saudável
25 a < 30	Sobrepeso
30 a < 35	Obesidade grau I
35 a < 40	Obesidade grau II (severa)
≥ 40	Obesidade grau III (mórbida)
Observação: A saída do programa deve seguir exatamente o formato abaixo (nenhum caractere pode diferir):

IMC Brutus: 36.03
IMC Olivia: 14.53
Brutus deve perder: 37.36 kg
Olivia deve ganhar: 12.31 kg
*/

# include <stdio.h>

int main () {

    float imc_atual_brutus, peso_ideal_brutus, perda_brutus, imc_atual_olivia,  peso_ideal_olivia, ganho_olivia;

    imc_atual_brutus = 122 / (1.84 * 1.84);

    peso_ideal_brutus = 25 * (1.84 * 1.84);

    perda_brutus = 122 - peso_ideal_brutus;

    imc_atual_olivia = 45 / (1.76 * 1.76);

    peso_ideal_olivia = 18.5 * (1.76 * 1.76);

    ganho_olivia = peso_ideal_olivia - 45;

    printf("IMC Brutus: %.2f\n", imc_atual_brutus);
    printf("IMC Olivia: %.2f\n", imc_atual_olivia);

    printf("Brutus deve perder: %.2f kg\n", perda_brutus);

    printf("Olivia deve ganhar: %.2f kg", ganho_olivia);

    return 0;
}