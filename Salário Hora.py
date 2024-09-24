# Função para calcular o salário por hora
def calcular_salario_por_hora(salario_mensal, dias_trabalhados_mes, horas_por_dia):
    horas_trabalhadas_mes = dias_trabalhados_mes * horas_por_dia
    return salario_mensal / horas_trabalhadas_mes

# Solicitar o salário mensal
salario_mensal = float(input("Digite o seu salário mensal (em reais): "))

# Solicitar a quantidade de dias trabalhados no mês
dias_trabalhados_mes = int(input("Digite a quantidade de dias trabalhados no mês: "))

# Solicitar a quantidade de horas trabalhadas por dia
horas_por_dia = float(input("Digite a quantidade de horas trabalhadas por dia: "))

# Calcular o salário por hora
salario_por_hora = calcular_salario_por_hora(salario_mensal, dias_trabalhados_mes, horas_por_dia)

# Exibir o salário por hora
print(f"Seu salário por hora é: R$ {salario_por_hora:.2f}")