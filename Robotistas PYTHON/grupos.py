bandera=0
lista =[]
while(bandera<3):
    nombre = input("escribe tu nombre")
    lista.append(nombre)
    if(nombre<"i"):
        print ("eres parte del grupo A")
    else:
        print ("eres parte del grupo B")    
    bandera += 1
print (lista)