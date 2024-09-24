# Função para calcular o salário por minuto com base no salário por hora
def calcular_salario_por_minuto(salario_por_hora):
    return salario_por_hora / 60

# Função para calcular o desconto de acordo com o atraso total em minutos
def calcular_desconto(salario_por_hora, atraso_total_minutos):
    salario_por_minuto = calcular_salario_por_minuto(salario_por_hora)
    return atraso_total_minutos * salario_por_minuto

# Solicitar o salário por hora
salario_por_hora = float(input('Digite o salário por hora: '))

# Calcular o salário por minuto e exibir
salario_por_minuto = calcular_salario_por_minuto(salario_por_hora)
print(f'Salário por minuto: R$ {salario_por_minuto:.2f}')

# Solicitar o horário previsto e o horário real de entrada
hora_prevista, minuto_previsto = map(int, input('Digite o horário de entrada previsto (HH MM): ').split())
hora_real, minuto_real = map(int, input('Digite o horário de entrada real (HH MM): ').split())

# Calcular o atraso total em minutos
atraso_total_minutos = (hora_real * 60 + minuto_real) - (hora_prevista * 60 + minuto_previsto)
atraso_total_minutos = max(0, atraso_total_minutos)  # Garantir que não haja valores negativos

# Verificar tolerância de 10 minutos
if atraso_total_minutos <= 10:
    print('Não houve atraso.')
    desconto = 0
else:
    atraso_total_minutos -= 10  # Descontar os 10 minutos tolerados
    
    # Calcular desconto com base no atraso além dos 10 minutos
    desconto = calcular_desconto(salario_por_hora, atraso_total_minutos)
    
    # Exibir o desconto aplicado
    print(f'Penalidade por atraso: R$ {desconto:.2f}')