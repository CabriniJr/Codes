#Vinheria Agnello Luigi 563552 Anthony 562096

#Váriaveis globais

linhas = "--------------------------------------------------"
usuarioEndereco = ""
usuarioAno = 2000

#Vinhos preços
tinto = 100
qtdTinto = 103

branco = 300
qtdBranco = 24

rose = 400
qtdRose = 21

laranja = 250
qtdLaranja = 13

seco = 173
qtdSeco = 43

verde = 200
qtdVerde = 47

tanico = 700
qtdTanico = 7

encorpado = 122
qtdEncorpado = 34

merlot = 662
qtdMerlot = 14

malbec = 101
qtdMalbec = 1

#Mensagem de boas vindas
print(linhas)
print("-----------------Vinheria Agnello-----------------")
print(linhas)

#Login do usuário

usuario = input("Insira o seu nome\n-->")
print(linhas)
print(f"Seja Bem-Vindo {usuario}")
print(linhas)

print("Modelo de endereços (UF)\nExemplo: SP = São Paulo; RJ = Rio de Janeiro")
while usuarioEndereco == "":
    resposta = input("Digite seu endereço\n-->").lower()
    if len(resposta) == 2:
        usuarioEndereco = resposta
    else:
        print("Digite um estado válido")

print(linhas)
usuarioAno = int(input("Agora digite seu ano de nascimento\n"
                       "Exemplo: 2006\n"
                       "-->"))
if usuarioAno >= 2007:
    print("É PROIBIDO A VENDA PARA MENORES DE 18 ANOS")
else:
    print(linhas)
    print(f"Seu login foi concluido\nNome: {usuario}\n"
          f"Endereço: {usuarioEndereco.upper()}\nAno nascimento: {usuarioAno}")
    print(linhas)
    rodando = True
    while rodando:
        print("Opções\n1 - Menu de vinhos\n2 - Abrir compra\n0 - Sair")
        resposta = int(input("-->"))
        match resposta:
            case 1:
                print(linhas)
                print("*----------------------MENU----------------------*")
                print(linhas)
                print("Vinho               Valor               Quantidade")
                if qtdTinto > 0:
                    print(f"> Tinto ----------- R${tinto} --------------- {qtdTinto} ")
                if qtdBranco > 0:
                    print(f"> Branco ---------- R${branco} --------------- {qtdBranco} ")
                if qtdRose > 0:
                    print(f"> Rose ------------ R${rose} --------------- {qtdRose} ")
                if qtdLaranja > 0:
                    print(f"> Laranja --------- R${laranja} --------------- {qtdLaranja} ")
                if qtdSeco > 0:
                    print(f"> Seco ------------ R${seco} --------------- {qtdSeco} ")
                if qtdVerde > 0:
                    print(f"> Verde ----------- R${verde} --------------- {qtdVerde} ")
                if qtdTanico > 0:
                    print(f"> Tanico ---------- R${tanico} --------------- {qtdTanico} ")
                if qtdEncorpado > 0:
                    print(f"> Encorpado ------- R${encorpado} --------------- {qtdEncorpado} ")
                if qtdMerlot > 0:
                    print(f"> Merlot ---------- R${merlot} --------------- {qtdMerlot} ")
                if qtdMalbec > 0:
                    print(f"> Malbec ---------- R${malbec} --------------- {qtdMalbec} ")

                print(linhas)
            case 2:
                print(linhas)
                print("*--------------------COMPRAS---------------------*")
                print(f"{linhas}")
                print("Código     Vinho           Valor           Quantidade")
                if qtdTinto > 0:
                    print(f"> 100 --- Tinto ------- R${tinto} ----------- {qtdTinto} ")
                if qtdBranco > 0:
                    print(f"> 101 --- Branco ------ R${branco} ----------- {qtdBranco} ")
                if qtdRose > 0:
                    print(f"> 102 --- Rose -------- R${rose} ----------- {qtdRose} ")
                if qtdLaranja > 0:
                    print(f"> 103 --- Laranja ----- R${laranja} ----------- {qtdLaranja} ")
                if qtdSeco > 0:
                    print(f"> 104 --- Seco -------- R${seco} ----------- {qtdSeco} ")
                if qtdVerde > 0:
                    print(f"> 105 --- Verde ------- R${verde} ----------- {qtdVerde} ")
                if qtdTanico > 0:
                    print(f"> 106 --- Tanico ------ R${tanico} ----------- {qtdTanico} ")
                if qtdEncorpado > 0:
                    print(f"> 107 --- Encorpado --- R${encorpado} ----------- {qtdEncorpado} ")
                if qtdMerlot > 0:
                    print(f"> 108 --- Merlot ------ R${merlot} ----------- {qtdMerlot} ")
                if qtdMalbec > 0:
                    print(f"> 109 --- Malbec ------ R${malbec} ----------- {qtdMalbec} ")

                print(linhas)
                qtdGarrafas = int(input("Quantas garrafas você deseja comprar?\n-->"))
                i = 0
                precoTotal = 0
                while qtdGarrafas > i:
                    qualvinho = int(input("Digite o código do vinho\n-->"))
                    quantasgarrafas = 0
                    match qualvinho:
                        case 100:
                            quantasgarrafas = int(input(f"Quantos de Tinto\n-->"))
                            if qtdTinto - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal+= tinto * quantasgarrafas
                                qtdTinto -= quantasgarrafas

                        case 101:
                            quantasgarrafas = int(input(f"Quantos de Branco\n-->"))
                            if qtdBranco - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += branco * quantasgarrafas
                                qtdBranco -= quantasgarrafas
                        case 102:
                            quantasgarrafas = int(input(f"Quantos de Rose\n-->"))
                            if qtdRose - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += rose * quantasgarrafas
                                qtdRose -= quantasgarrafas
                        case 103:
                            quantasgarrafas = int(input(f"Quantos de Laranja\n-->"))
                            if qtdLaranja - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += laranja * quantasgarrafas
                                qtdLaranja -= quantasgarrafas
                        case 104:
                            quantasgarrafas = int(input(f"Quantos de Seco\n-->"))
                            if qtdSeco - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += seco * quantasgarrafas
                                qtdSeco -= quantasgarrafas
                        case 105:
                            quantasgarrafas = int(input(f"Quantos de Verde\n-->"))
                            if qtdVerde - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += verde * quantasgarrafas
                                qtdVerde -= quantasgarrafas
                        case 106:
                            quantasgarrafas = int(input(f"Quantos de Tanico\n-->"))
                            if qtdTanico - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += tanico *quantasgarrafas
                                qtdTanico -= quantasgarrafas
                        case 107:
                            quantasgarrafas = int(input(f"Quantos de Encorpado\n-->"))
                            if qtdEncorpado - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += encorpado * quantasgarrafas
                                qtdEncorpado -= quantasgarrafas
                        case 108:
                            quantasgarrafas = int(input(f"Quantos de Merlot\n-->"))
                            if qtdMerlot - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas a serem compradas = {qtdGarrafas - i}")
                                precoTotal += merlot * quantasgarrafas
                                qtdMerlot -= quantasgarrafas
                        case 109:
                            quantasgarrafas = int(input(f"Quantos de Malbec\n-->"))
                            if qtdMalbec - quantasgarrafas < 0:
                                print("Quantidade inválida")
                            else:
                                i += quantasgarrafas
                                print(i)
                                print(f"Garrafas restantes = {qtdGarrafas - i}")
                                precoTotal += malbec * quantasgarrafas
                                qtdMalbec -= quantasgarrafas
                        case _:
                            print("Opção inválida!!!")
                    print(linhas)
                    print(f"Preço atual R${precoTotal} \nQtd vinho atual {quantasgarrafas}")
                    print(linhas)
                print(linhas)
                if precoTotal > 500:
                    print("Frete grátis!!\n")
                else:
                    if usuarioEndereco.lower() == "sp":
                        precoTotal += precoTotal*0.05
                    else:
                        precoTotal += precoTotal*0.1
                print(linhas)
                print(f"Preço total R$ {precoTotal}")
                print(linhas)








            case 0:
                rodando = False
            case _:
                print(linhas)
                print("Opção inválida")
                print(linhas)





