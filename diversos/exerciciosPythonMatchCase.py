#Exercícios Estrutura de seleção múltipla - Match - case

#Exercício 1
def exercicio1():
    print("Exercício 1 - Descontos\n10% Funcionário - 5% Cliente VIP - 0% Comum ")
    valorCompra = float(input("Digite o valor da compra\n-->"))
    if valorCompra <=0 :
        print("Valor inválido")
    else:
        selecaoDesconto = int(input("Se identifique\n(1) Cliente comum\n(2) Funcionário\n(3) VIP\n-->"))
        match selecaoDesconto:
            case 1:
                print(f"Comum\nValor final R${valorCompra}")
            case 2:
                print(f"Funcionário\nValor final R${valorCompra-valorCompra*0.1}")
            case 3:
                print(f"VIP\nValor final R${valorCompra-valorCompra*0.05}")
            case _:
                print("Seleção inválida!")


#Exercício 2 
def exercicio2():
    print("Exercício 2 - Estado civil")
    letraEstado = input("Digite a primeira letra do seu estado civil\n-->")
    match letraEstado:
        case "s"|"S":
            print("Solteiro")
        case "c"|"C":
            print("Casado")
        case "v"|"V":
            print("Viúvo")
        case "d"| "D":
            print("Divorcioado")
        case _:
            print("Valor inválido!")

#Exercício 3
def exercicio3():
    print("Exercício 3 - Calculo")
    num = float(input("Digite o número a ser a ser modificado\n-->"))
    print(f"\n\nNúmero escolhido {num}")
    opcao = int(input("Opções\n(1) Dobro\n(2) Metade\n(3) 10% do número\n-->"))
    match opcao:
        case 1:
            print(f"Dobro\nValor final {num*2}")
        case 2:
            print(f"Metade\nValor final {num/2}")
        case 3:
            print(f"Um decimo do valor\nValor final {num*0.1}")
        case _:
            print("Opção inválida")

#Exercício 4
def exercicio4():
    print("Exercício 4 - multiplos de 3")
    num = int(input("Digite um número\n-->"))
    multiplo = True if num%3 == 0 else False
    match multiplo:
        case True:
            print("Número é multiplo de 3")
        case False:
            print("Número não é multiplo de 3")
        case _:
            print("Valor inválido")

#Exercício 5
def exercicio5():
    print("Exercício 5 - Palestras")
    opcao = int(input("Código ---- Palestra\n(1) --- Linux\n(2) --- Banco de Dados\n(3) --- Windows Server\n(4) --- Lógica e programação\n-->"))
    match opcao:
        case 1:
            print("Palestra: Linux\nLocal: Auditório 1")
        case 2:
            print("Palestra: Banco de dados\nLocal: Audiotório 2 ")
        case 3:
            print("Palestra: Windows Server\nLocal: Audiotório 3")
        case 4:
            print("Palestra: Lógica e Programação\nLocal: Auditório principal")
        case _:
            print("Opção inválida")

#Exercício 6
def exercicio6():
    print("Exercício 6 - Cardápio")
    print("----Menu----\n(1) --- Picanha\n(2) --- Lasanha\n(3) --- Strogonoff\n(4) --- Bife Acebolado\n(5) --- Pão com ovo")
    opcao = int(input("Digite a opção -->"))
    gorgeta = input("Gorgeta? (Y/N)\n-->").lower()
    if gorgeta == "y":
        mult = 0.1
    elif gorgeta == "n":
        mult = 0
    else:
        print("Resposta inválida")
    match opcao:
        case 1:
            print(f"Preço R${25+25*mult}")
        case 2|3:
            print(f"Preço R${20+20*mult}")
        case 4:
            print(f"Preço R${15+15*mult}")
        case 5:
            print(f"Preço R${5+5*mult}")
        case _:
            print("Opção inválida")
