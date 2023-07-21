numero = "6"
vidas = 5
while(True):
    numeroI = input("escribe un numero entre el 0 al 9")
    if (numero == numeroI):
        print("ganaste")
        break
    else:
        print (f"intente de nuevo te quedan {vidas}")
        vidas -= 1
        if(vidas==0):
            print ("PERDISTE")
            break