import os 
#Exercício 9 - Área do trapézio
def exercicio9():
    print("Exercício 9 - Área do trapézio")
    baseMaior = float(input("Digite o valor da base maior\n--> "))
    baseMenor = float(input("Digite o valor da base menor\n--> "))
    altura = float(input("Digite o valor da altura\n--> "))
    if baseMaior <= 0 or baseMenor <= 0 or altura <= 0:
        print("Valores inválidos!")
    else:
        print(f"Área do trapézio = {(baseMaior+baseMenor)*altura/2}")

#Exercício 10 - Mini calculadora 
def exercicio10():
    os.system("clear")
    print("----- Operadores -----\n--> Soma +\n--> Subtração -\n--> Multiplicação *\n--> Divisão /")
    resposta = input("-->")
    v1 = float(input("Digite o primeiro valor\n--> "))
    v2 = float(input("Digite o segundo valor\n--> "))
    if resposta == "+":
        print(f"A soma de {v1} e {v2} é igual a {v1+v2}")
    elif resposta == "-":
        print(f"A subtração de {v1} e {v2} é igual a {v1-v2}")    
    elif resposta == "*":
        print(f"A multiplicação de {v1} e {v2} é igual a {v1*v2}")
    elif resposta == "/":
        print(f"A divisão de {v1} e {v2} é igual a {v1/v2}")
    else:
        print("Operação inválida!")
  
#Exercício 11 - Valor de x
def exercicio11():
    os.system("clear")
    x = float(input("Digite o valor de x\n--> "))
    if x <= 1:
        print(f"f(x) = 1")
    elif x > 1 and x <= 2:
        print("f(x) = 2")
    elif x > 2 and x <=3:
        print(f"f(x) = {x**2}")
    elif x > 3: 
        print(f"f(x) = {x**3}")

#Exercício 12 - Verificação de número
def exercicio12():
    os.system("clear")
    num = int(input("Digite um número inteiro\n--> "))
    
