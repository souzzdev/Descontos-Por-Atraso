#include <stdio.h>

float calcular_salario_por_hora(float salario_mensal, int dias_trabalhados_mes, float horas_por_dia) {
    float horas_trabalhadas_mes = dias_trabalhados_mes * horas_por_dia;
    return salario_mensal / horas_trabalhadas_mes;
}

int main() {
    float salario_mensal;
    int dias_trabalhados_mes;
    float horas_por_dia;

    // Solicitar o salário mensal
    printf("Digite o seu salario mensal (em reais): ");
    scanf("%f", &salario_mensal);

    // Solicitar a quantidade de dias trabalhados no mês
    printf("Digite a quantidade de dias trabalhados no mes: ");
    scanf("%d", &dias_trabalhados_mes);

    // Solicitar a quantidade de horas trabalhadas por dia
    printf("Digite a quantidade de horas trabalhadas por dia: ");
    scanf("%f", &horas_por_dia);

    // Calcular o salário por hora
    float salario_por_hora = calcular_salario_por_hora(salario_mensal, dias_trabalhados_mes, horas_por_dia);

    // Exibir o salário por hora
    printf("Seu salario por hora e: R$ %.2f\n", salario_por_hora);

    return 0;
}

