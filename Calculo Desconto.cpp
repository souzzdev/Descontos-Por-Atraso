#include <stdio.h>

float calcular_salario_por_minuto(float salario_por_hora) {
    return salario_por_hora / 60;
}

float calcular_desconto(float salario_por_hora, int atraso_total_minutos) {
    float salario_por_minuto = calcular_salario_por_minuto(salario_por_hora);
    return atraso_total_minutos * salario_por_minuto;
}

int main() {
    float salario_por_hora;

    // Solicitar o salario por hora
    printf("Digite o salario por hora: ");
    scanf("%f", &salario_por_hora);

    // Calcular o salario por minuto e exibir
    float salario_por_minuto = calcular_salario_por_minuto(salario_por_hora);
    printf("Salario por minuto: R$ %.2f\n", salario_por_minuto);

    // Solicitar o horario previsto e o horario real de entrada
    int hora_prevista, minuto_previsto;
    printf("Digite o horario de entrada previsto (HH MM): ");
    scanf("%d %d", &hora_prevista, &minuto_previsto);

    int hora_real, minuto_real;
    printf("Digite o horario de entrada real (HH MM): ");
    scanf("%d %d", &hora_real, &minuto_real);

    // Calcular o atraso total em minutos
    int atraso_total_minutos = (hora_real * 60 + minuto_real) - (hora_prevista * 60 + minuto_previsto);
    if (atraso_total_minutos < 0) {
        atraso_total_minutos = 0; // Garantir que nao haja valores negativos
    }

    // Verificar tolerancia de 10 minutos
    float desconto = 0;
    if (atraso_total_minutos <= 10) {
        printf("Nao houve atraso.\n");
    } else {
        atraso_total_minutos -= 10; // Descontar os 10 minutos tolerados
        
        // Calcular desconto com base no atraso alem dos 10 minutos
        desconto = calcular_desconto(salario_por_hora, atraso_total_minutos);
        
        // Exibir o desconto aplicado
        printf("Penalidade por atraso: R$ %.2f\n", desconto);
    }

    return 0;
}

