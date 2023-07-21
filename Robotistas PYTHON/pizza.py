ingredientesV = []
ingredientesN = []
default = ["salsa", "queso"]
pregunta = input("que tipo de pizza quieres ? ")
if (pregunta == "vegana"):
    vegana = ["brocoli","champiñones"]
    print ("los ingredientes disponibles son",vegana)
    
    for pizzaV in vegana:
        print (f"quieres agregar{pizzaV}")
        ingrediente = input()
        if (ingrediente=="si"):
            ingredientesV.append(pizzaV)
    default.extend(ingredientesV) 
else:
    normal = ["peperoni","jamon","mexicana"]
    print ("los ingredientes disponibles son",normal)
    
    for pizzaN in normal:
        print (f"quieres agregar{pizzaN}")
        ingrediente = input()
        if (ingrediente=="si"):
            ingredientesN.append(pizzaN)
    default.extend(ingredientesN)
default.reverse()
print (default)
