violao = open ("Victor e Leo - Borboletas.txt","r")
linha_atual = 1

def indicelinha(): #Imprime o número de cada linha
    if linha_atual <= 9:
        print("Linha",linha_atual,end="   -->  ")
    elif 10<=linha_atual<100:
        print("Linha",linha_atual,end="  -->  ")
    else: 
        print("Linha",linha_atual,end=" -->  ")
    


leitura = list(violao.readline())
while leitura: 
    indicelinha()
    for i in range(len(leitura)):   
        print(leitura[i],end="")
    leitura = leitura = list(violao.readline())
    linha_atual = linha_atual + 1

#
