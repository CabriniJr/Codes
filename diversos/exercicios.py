# Todos os exercícios da lista Algoritmos Sequenciais como funções em Python - Luigi Cabrini

import math as m
import os 
# Função para identificar o sistema e adequar o comando clear do terminal para cada sistema
def clear():
    sistema = os.name
    if sistema == 'nt':  # Sistema Windows
        os.system('cls')
    else:  # Para sistemas Linux ou macOS
        os.system('clear')

# Função para parar o loop de cada exercício
def saida():
    voltar = input("\n\naperte Q para voltar ou qualquer tecla para continuar no exercício: ")
    if voltar == 'Q'or voltar == 'q':
        return False
    else:
        return True

# Exercícios 1 - 10

def exercicio1():
    loop = True
    while loop:   
        clear()
        print("Exercício 1 - input nome") 
        nome_usuario = input("Digite o nome do usúario: ")
        print(f"\n\nOlá {nome_usuario}")
        loop = saida()
       
        
def exercicio2():
    loop = True
    while loop:
        clear()
        print("Exercício 2 - Soma e multiplicação de valores") 
        valores = []
        indice = int(input("Digite o total de valores: "))
        for i in range(indice):
            valores.append(int(input(f"Valor {i+1}: ")))
        print(f"\n\nSoma = {sum(valores)}\nMultiplicação = {m.prod(valores)}")
        loop = saida()

def exercicio3():
    loop = True
    while loop:
        clear()
        print("Exercício - 3 Média das notas")
        valores =[]
        for i in range (3):
            valores.append(int(input(f"Nota {i+1}: ")))
        print(f"\n\nMédia aritmética : {sum(valores)/len(valores)}")
        loop = saida()

def exercicio4():
    loop = True
    while loop:
        clear()
        print("Exercício 4 - Conversor Celsius - Fahrenheit")
        valores_virgens = []
        valores_tratados = []
        indice = int(input("Quantos valores você deseja converter em fahrenheit? "))
        for i in range(indice):
            valores_virgens.append(float(input(f"Valor {i+1}: ")))
            valores_tratados.append(valores_virgens[i]*1.8+32) 
        print(f"\n\nValores digitados (C°) {valores_virgens}\nValores convertidos (F) {valores_tratados}")
        loop = saida()

def exercicio5():
    loop = True
    while loop:
        clear()
        print("Exercício 5 - Calculadora IMC")
        peso = float((input("Digite seu peso(Kg): ")))
        altura = float(input("Digite sua altura(Metros): "))
        print(f"\n\nSeu imc = {peso/altura**2}")
        loop = saida()

def exercicio6():
    loop = True
    while loop:
        clear()
        print("Exercício 6 - Calculadora área do triângulo")
        base = float((input("Digite o base(cm): ")))
        altura = float(input("Digite a Altura(cm): "))
        print(f"\n\nA área é igual a {(base*altura)/2}cm²")
        loop = saida()

def exercicio7():
    loop = True
    while loop:
        clear()
        print("Exercício 7 - Desconto 10%")
        produto_nome = input("Nome do produto: ")
        produto_preco = float(input("Valor do produto: "))
        print(f"\n\n{produto_nome}\nCustava R${produto_preco}\nAgora custa R${produto_preco-((produto_preco/100)*10)}")
        loop = saida()

def exercicio8():
    loop = True
    while loop:
        clear()
        print("Exercício 8 - Vendedor e vendas")
        class vendedor:
            nome = input("Digite o nome: ")
            qtd_vendas = int(input("Quantidade de vendas: "))
            valor_total = float(input("Valor total das vendas: "))
            salario = 2500 + (qtd_vendas*200) + ((valor_total/100)*2)
        print(f"\n\nNome do vendedor: {vendedor.nome}\nQuantidade de carros vendidos: {vendedor.qtd_vendas}")
        print(f"Valor total das vendas: {vendedor.valor_total}\nO vendedor {vendedor.nome} receberá um salário de R$ {vendedor.salario}")
        loop = saida()

def exercicio9():
    loop = True
    while loop:
        clear()
        print("Exercício 9 - Troca de váriaveis")
        a = int(input("Digite o valor A: "))
        b = int(input("Digite o valor B: "))
        a = b
        b = a 
        print("\n\n",a,b)
        loop = saida()

def exercicio10():
    loop = True
    while loop:
        clear()
        print("Exercício 10 - Número invertido n digitos")
        numero = input("Digite o número inteiro: ")
        numero_aberto = list(numero)
        numero_aberto.reverse()
        print("O número invertido: ",end="")
        for i in range(len(numero_aberto)):
            print(numero_aberto[i],end="")
        print("\n")
        loop = saida()

# Método príncipal, faz a interface do programa

while True:
    clear()
    print("\n----------Lista de exercícios: Algoritimos Sequenciais------------\nby Luigi Cabrini\n\n")
    print("-----Exercícios-----\nExercício 1 - input nome\nExercício 2 - Soma e multiplicação de valores\nExercício 3 - Média das notas")
    print("Exercício 4 - Conversor Celsius - Fahrenheit\nExercício 5 - Calculadora IMC\nExercício 6 - Calculadora área do triângulo\nExercício 7 - Desconto 10%")
    print("Exercício 8 - Vendedor e vendas\nExercício 9 - Troca de váriaveis\nExercício 10 - Número invertido de n digitos\n\nQ Para parar o programa")
    escolha = input("Digite o valor do exercício que você deseja acessar: ")
    match escolha:
        case "1":
            exercicio1()
        case "2":
            exercicio2()
        case "3":
            exercicio3()
        case "4":
            exercicio4()
        case "5":
            exercicio5()
        case "6":
            exercicio6()
        case "7":
            exercicio7()
        case "8": 
            exercicio8()
        case "9":
            exercicio9()
        case "10":
            exercicio10()
        case "Q": 
            break
        case "q":
            break
        case _:
            print("Digite uma opção válida")
         
# O programa não tem tratamento de erros de entrada simplismente por que ia ficar muito grande, talvez eu faça em forma de uma funçâo,
# mas para ficar de simples entendimento, deixei sem o tratamento de erros.