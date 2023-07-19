variable = 1
while (variable == 1):
    

    print ("escribe tu nombre")
    nombre = input()
    print ("escribe tu edad")
    edad = int(input())
    print ("tu nombre es", nombre,"tu edad es", edad)
    print (18<=edad)
    if(edad<18):
        print ("no puedes manejar")
    else:
        print("si puedes manejar")

    while (edad==18):
        print("permitir manejar")
        break
    print ("1 seguir 2 es terminar")
    variable= int(input())
    if(variable == 2):
        print ("terminaste")
        break

        
        


