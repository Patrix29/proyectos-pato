import math as M
print(M.pi)
def area():
    radio = float(input("escribe el radio")) 
    areaP = M.pi * (radio**2) 
    return areaP
def volumen():
    areaP = area()
    altura = float(input("escribe la altura")) 
    volumenP = areaP * altura
    return volumenP
pregunta = input("calcular area o volumen")
if (pregunta=="area"):
    resultadoA = area()
    print (resultadoA)
else:
    resultadoB = volumen()
    print (resultadoB)
    
