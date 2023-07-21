contraseña = 0
bandera = 0
contraseña = "claveprincipal"
contraseñaI = 0
while (contraseña != contraseñaI):
    contraseñaI = input("escribe tu contraseña")
    if(contraseña == contraseñaI):
        print ("CORRRECTO")
        break
    else:
        print ("INCORRECTO")
        if (bandera == 5):
            print("MUCHOS INTENTOS FALLIDOS")
            break
    bandera += 1
