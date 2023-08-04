calculadora = 1
while(calculadora == 1):
    resultado=0
    print("presiona 1 para sumar, 2 para restar. 3 para multiplicar y 4 para dividir")
    decision= int(input())
    if (1<=decision and decision<=4):
        print("escribe numeros de la operacion")
        v1= int(input())
        v2= int(input())

        if(decision == 1):
            resultado = v1 + v2
        elif(decision == 2):  
            resultado = v1 - v2
        elif(decision == 3):
            resultado = v1 * v2
        elif(decision == 4):
            resultado = v1 / v2
       

        print(resultado,"es el resultado")

        print("1 para seguir 2 para apagar")

        calculadora= int (input())

        if (calculadora == 2):
            print ("off")
            break
    else :
        print("numero invalido")
        decision= int(input())
