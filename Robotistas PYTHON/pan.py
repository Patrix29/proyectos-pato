pan1 = "muerto"
peso1 = 1
can1 = 2
pan2 = "concha"
peso2 = 4
can2 = 5
peso_T = 9
peso_T2 = 8
pan1 = ( input("coloca tipo de pan"))
peso1 = float( input("coloca peso de pan"))
can1 = int( input("cuanto pan tienes ?"))
pan2 = ( input("coloca otro tipo de pan"))
peso2 = float( input("coloca peso de pan"))
can2 = int( input("cuanto pan tienes ?"))
peso_T = (can1 * peso1)
peso_T2 = (can2 * peso2)
print ("el peso de",pan1, "es",peso_T)
print ("el peso de",pan2, "es",peso_T2)
print ("tienes",peso_T2 + peso_T, "kilos de pan en total")
