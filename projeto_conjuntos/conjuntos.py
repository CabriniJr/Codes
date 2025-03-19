import os 
rodando = True
conjuntos = []
alfabeto = ["A","B","C","D","E","F","G","H","I","J"]
os.system("clear")
print("\n\n---------Calculadora de conjuntos----------")
num_conj = int(input("Quantos conjuntos tem na operação?"))
# Função que cria os conjuntos
def criar_conjunto(x,ind):
    conjunto =[]
    for i in range(x):
        print("Valor do elemento ",i+1) 
        num = int(input()) 
        conjunto.append(num) 
        print(conjunto)
    print("\n\n%c = "%alfabeto[ind],conjunto)
    return conjunto

# Método "main"
for i in range(num_conj):
    print("\n---Quantos elementos tem o conjunto %c?"%alfabeto[i])
    x = int(input())
    conjunto = criar_conjunto(x,i) 
    conjunto.sort()
    conjuntos.append(conjunto)
print(conjuntos)

def op():
    conjunto.sort()
    escrita = str(input("\n------DIGITE A OPERAÇÃO------\nOperadores:\nU = União\ni = Interseção\n- = Subtração\nExemplo: ABU ==> União de A e B\n--> "))
    os.system("clear")
    resultado =[]
    indice_conjunto = []
    operacaoescrita = []
    operacaoescrita = list(escrita)
    for i in range(len(operacaoescrita)):
        if operacaoescrita[i] in alfabeto:
            indice_conjunto.append(alfabeto.index(operacaoescrita[i]))
        else:
            match operacaoescrita[i]:
                case "U":
                    resultado = list(set(conjuntos[indice_conjunto[0]]) | set(conjuntos[indice_conjunto[1]])) 
                case "i":
                    resultado = list(set(conjuntos[indice_conjunto[0]]) & set(conjuntos[indice_conjunto[1]]))
                case "-":
                    resultado = list(set(conjuntos[indice_conjunto[0]]) - set(conjuntos[indice_conjunto[1]]))
    conjuntos.append(resultado)
    print(indice_conjunto,operacaoescrita,resultado)
    indice_conjunto.clear()
    print("\n----Conjuntos----")
    for i in range(len(conjuntos)):
        print(alfabeto[i],"=",conjuntos[i])
while rodando:
    op()
#