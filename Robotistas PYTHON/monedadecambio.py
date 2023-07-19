peso = 0
dolar = 0
euro = 0
peso = float(input("inserte cantidad de peso mexicano"))
desicion = 0                                                                                                                                                                                                                                                                                                                                                                                                                                                      
desicion = int(input("1 para escoger dolar, 2 para euros"))
if (desicion == 1):
    dolar = (peso / 16.75)
    print ("tienes", dolar, "dolares")
else:
    euro = (peso / 18.81)
    print ("tienes", euro, "euros")