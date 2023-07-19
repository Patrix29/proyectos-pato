listaM = ["Mate","Español","Historia","Aleman","Quimica"]
notas = []
def nota():
    for p in range (len(listaM)):
        notas.append(input("que sacaste en ? "+listaM[p]))
nota()
for i in range (len(listaM)):
    print ("sacaste",notas[i],"en",listaM[i])