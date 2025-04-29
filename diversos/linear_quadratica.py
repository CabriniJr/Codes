#Calculadora de segundo grau by Luigi 24/08/23
from fractions import Fraction
#input
print("\n\n------------------------------------------\n------Calculadora linear e quadratica----- \n------------------------------------------\n\nPara quadratica Ax²+Bx+C=Y \nPara linear A=0, Bx+C=Y\n")
loop = True
while loop == True:
    print("------------------------------------------\n")
    a = float(input("Digite o valor de A: "))
    b = float(input("Digite o valor de B: "))
    c = float(input("Digite o valor de C: "))
    y = float(input("Digite o valor de Y: "))

    if a == 0:
        x = -c/b
        xf = Fraction(x).limit_denominator(10)
        print("\nTipo: Equação linear\n\nValor de X: {} ou {}".format(x,xf))
        if b > 0:
            print(" \nA reta é crescente //")
        else:
            print(" \nA reta é decrescente \\ ")
    else:
        cn = c - y
        delta = (b ** 2) -4 * (a) * (cn)
        deltaf = Fraction(delta).limit_denominator(10)
        xv = -b/(2 * a)
        yv = -delta/(4 * a)
        xvf = Fraction(xv).limit_denominator(10)
        yvf = Fraction(yv).limit_denominator(10)
        if delta < 0:
            print("\nNão há raizes reais!\n")
        else:
        #Resultado
            
            x1 = (-b + pow(delta,0.5))/(2 * a)
            x1f = Fraction(x1).limit_denominator(10)
            x2 = (-b - pow(delta,0.5))/(2 * a)
            x2f = Fraction(x2).limit_denominator(10)
            
            print("\nTipo: Equação Quadratica\n\nRaiz X': {0:2.3f} ou {1}".format(x1,x1f))
            print("Raiz X\": {0:2.3f} ou {1}\n".format(x2,x2f))
            print("Valor delta: {0:2.3f} ou {1}\n".format(delta,deltaf))

        #Avaliação geométrica
            
            print("Conjunto solução/Coordenadas: S=({0:2.3f},{1:2.3f})".format(x1,x2))
            print("\nX vértice: {0:2.3f} ou {1}\nY vértice: {2:2.3f} ou {3}".format(xv,xvf,yv,yvf))
           
            if a > 0:
                print("\nConcavidade da função: \\_// \n")
            else:
                print("\nConcavidade da função: //¨\\ \n ")