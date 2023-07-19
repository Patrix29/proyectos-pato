edad=0
sueldo=0
edad = int(input("escribe tu edad"))
sueldo = float(input("cuanto es tu sueldo mensual ?"))
if(edad >= 18 and sueldo >= 15000):
    print ("tienes que pagar impuestos")

elif(edad >= 18 or sueldo < 15000):
    print ("eres mayor de edad pero no pagas impuestos")

else: 
    print ("no pagas impuestos") 